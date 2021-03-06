/*------------------------------------------------------------------------/
/  Universal String Handler for Console Input and Output
/-------------------------------------------------------------------------/
/
/ Copyright (C) 2014, ChaN, all right reserved.
/
/ xprintf module is an open source software. Redistribution and use of
/ xprintf module in source and binary forms, with or without modification,
/ are permitted provided that the following condition is met:
/
/ 1. Redistributions of source code must retain the above copyright notice,
/    this condition and the following disclaimer.
/
/ This software is provided by the copyright holder and contributors "AS IS"
/ and any warranties related to this software are DISCLAIMED.
/ The copyright owner or contributors be NOT LIABLE for any damages caused
/ by use of this software.
/
/-------------------------------------------------------------------------*/

#include "xprintf.hpp"
#include <stdarg.h>


/*----------------------------------------------*/
/* Put a character                              */
/*----------------------------------------------*/

void xprintf::putc (char c)
{
	if (_CR_CRLF && c == '\n') putc('\r');		/* CR -> CRLF */

	// if (outptr) {		/* Destination is memory */
	// 	*outptr++ = (unsigned char)c;
	// 	return;
	// }
	if (xfunc_out) {	/* Destination is device */
		xfunc_out((unsigned char)c);
	}
}



/*----------------------------------------------*/
/* Put a null-terminated string                 */
/*----------------------------------------------*/

void xprintf::puts (					/* Put a string to the default device */
	const char* str				/* Pointer to the string */
)
{
	while (*str) {
		putc(*str++);
	}
}


/*----------------------------------------------*/
/* Formatted string output                      */
/*----------------------------------------------*/
/*  xprintf("%d", 1234);			"1234"
    xprintf("%6d,%3d%%", -200, 5);	"  -200,  5%"
    xprintf("%-6u", 100);			"100   "
    xprintf("%ld", 12345678);		"12345678"
    xprintf("%llu", 0x100000000);	"4294967296"	<_USE_LONGLONG>
    xprintf("%04x", 0xA3);			"00a3"
    xprintf("%08lX", 0x123ABC);		"00123ABC"
    xprintf("%016b", 0x550F);		"0101010100001111"
    xprintf("%*d", 6, 100);			"   100"
    xprintf("%s", "String");		"String"
    xprintf("%-5s", "abc");			"abc  "
    xprintf("%5s", "abc");			"  abc"
    xprintf("%c", 'a');				"a"
    xprintf("%f", 10.0);            <xprintf lacks floating point support. Use regular printf.>
*/

void xprintf::vprintf (
	const char*	fmt,	/* Pointer to the format string */
	va_list arp			/* Pointer to arguments */
)
{
	unsigned int r, i, j, w, f;
	int n;
	char s[32], c, d, *p;
#if _USE_LONGLONG
	_LONGLONG_t v;
	unsigned _LONGLONG_t vs;
#else
	long v;
	unsigned long vs;
#endif


	for (;;) {
		c = *fmt++;					/* Get a format character */
		if (!c) break;				/* End of format? */
		if (c != '%') {				/* Pass it through if not a % sequense */
			putc(c); continue;
		}
		f = w = 0;					/* Clear parms */
		c = *fmt++;					/* Get first char of the sequense */
		if (c == '0') {				/* Flag: left '0' padded */
			f = 1; c = *fmt++;
		} else {
			if (c == '-') {			/* Flag: left justified */
				f = 2; c = *fmt++;
			}
		}
		if (c == '*') {				/* Minimum width from an argument */
			n = va_arg(arp, int);
			if (n < 0) {			/* Flag: left justified */
				n = 0 - n;
				f = 2;
			}
			w = n; c = *fmt++;
		} else {
			while (c >= '0' && c <= '9') {	/* Minimum width */
				w = w * 10 + c - '0';
				c = *fmt++;
			}
		}
		if (c == 'l' || c == 'L') {	/* Prefix: Size is long */
			f |= 4; c = *fmt++;
#if _USE_LONGLONG
			if (c == 'l' || c == 'L') {	/* Prefix: Size is long long */
				f |= 8; c = *fmt++;
			}
#endif
		}
		if (!c) break;				/* End of format? */
		d = c;
		if (d >= 'a') d -= 0x20;
		switch (d) {				/* Type is... */
		case 'S' :					/* String */
			p = va_arg(arp, char*);
			for (j = 0; p[j]; j++) ;
			while (!(f & 2) && j++ < w) putc(' ');
			puts(p);
			while (j++ < w) putc(' ');
			continue;
		case 'C' :					/* Character */
			putc((char)va_arg(arp, int)); continue;
		case 'B' :					/* Binary */
			r = 2; break;
		case 'O' :					/* Octal */
			r = 8; break;
		case 'D' :					/* Signed decimal */
		case 'U' :					/* Unsigned decimal */
			r = 10; break;
		case 'X' :					/* Hexdecimal */
			r = 16; break;
		default:					/* Unknown type (passthrough) */
			putc(c); continue;
		}

		/* Get an argument and put it in numeral */
#if _USE_LONGLONG
		if (f & 8) {	/* long long argument? */
			v = va_arg(arp, _LONGLONG_t);
		} else {
			if (f & 4) {	/* long argument? */
				v = (d == 'D') ? (long)va_arg(arp, long) : (long)va_arg(arp, unsigned long);
			} else {		/* int/short/char argument */
				v = (d == 'D') ? (long)va_arg(arp, int) : (long)va_arg(arp, unsigned int);
			}
		}
#else
		if (f & 4) {	/* long argument? */
			v = va_arg(arp, long);
		} else {		/* int/short/char argument */
			v = (d == 'D') ? (long)va_arg(arp, int) : (long)va_arg(arp, unsigned int);
		}
#endif
		if (d == 'D' && v < 0) {	/* Negative value? */
			v = 0 - v; f |= 16;
		}
		i = 0; vs = v;
		do {
			d = (char)(vs % r); vs /= r;
			if (d > 9) d += (c == 'x') ? 0x27 : 0x07;
			s[i++] = d + '0';
		} while (vs != 0 && i < sizeof s);
		if (f & 16) s[i++] = '-';
		j = i; d = (f & 1) ? '0' : ' ';
		while (!(f & 2) && j++ < w) putc(d);
		do putc(s[--i]); while (i != 0);
		while (j++ < w) putc(' ');
	}
}


void xprintf::printf (			/* Put a formatted string to the default device */
	const char*	fmt,	/* Pointer to the format string */
	...					/* Optional arguments */
)
{
	va_list arp;


	va_start(arp, fmt);
	vprintf(fmt, arp);
	va_end(arp);
}


