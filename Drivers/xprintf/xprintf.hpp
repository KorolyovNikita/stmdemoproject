/*------------------------------------------------------------------------*/
/* Universal string handler for user console interface  (C)ChaN, 2012     */
/*------------------------------------------------------------------------*/

#pragma once

#include <stdarg.h>

#define _USE_XFUNC_OUT	1	/* 1: Use output functions */
#define	_CR_CRLF		0	/* 1: Convert \n ==> \r\n in the output char */
#define	_USE_LONGLONG	0	/* 1: Enable long long integer in type "ll". */
#define	_LONGLONG_t		long long	/* Platform dependent long long integer type */

#define _USE_XFUNC_IN	0	/* 1: Use input function */
#define	_LINE_ECHO		0	/* 1: Echo back input chars in xgets function */


class xprintf
{
public:
  xprintf(void(*func)(unsigned char))
    : xfunc_out(func) 
  {}
  
  void puts (const char* str);
  void printf (const char* fmt, ...);

private:
  void putc (char c);
  void vprintf (const char* fmt, va_list arp);

  void (*const xfunc_out)(unsigned char);	/* Pointer to the output stream */
  // static char *outptr;
};
