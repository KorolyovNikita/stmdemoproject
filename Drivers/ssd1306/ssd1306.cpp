/**
 * original author:  Tilen Majerle<tilen@majerle.eu>
 * modification for STM32f10x: Alexander Lutsai<s.lyra@ya.ru>

   ----------------------------------------------------------------------
   	Copyright (C) Alexander Lutsai, 2016
    Copyright (C) Tilen Majerle, 2015

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
   ----------------------------------------------------------------------
 */
#include "ssd1306.hpp"


#define ABS(x)   ((x) > 0 ? (x) : -(x))


template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
ScrollRight(uint8_t start_row, uint8_t end_row)
{
	WriteCommand(Commands::RIGHT_HORIZONTAL_SCROLL);
	WriteCommand(0x00);
	WriteCommand(start_row);
	WriteCommand(0x00);
	WriteCommand(end_row);
	WriteCommand(0x00);
	WriteCommand(0xFF);
	WriteCommand(Commands::ACTIVATE_SCROLL);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
ScrollLeft(uint8_t start_row, uint8_t end_row)
{
	WriteCommand(Commands::LEFT_HORIZONTAL_SCROLL);
	WriteCommand(0x00);
	WriteCommand(start_row);
	WriteCommand(0x00);
	WriteCommand(end_row);
	WriteCommand(0x00);
	WriteCommand(0xFF);
	WriteCommand(Commands::ACTIVATE_SCROLL);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Scrolldiagright(uint8_t start_row, uint8_t end_row)
{
	WriteCommand(Commands::SET_VERTICAL_SCROLL_AREA);
	WriteCommand(0x00);
	WriteCommand(height);

	WriteCommand(Commands::VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL);
	WriteCommand(0x00);
	WriteCommand(start_row);
	WriteCommand(0x00);
	WriteCommand(end_row);
	WriteCommand(0x01);
	WriteCommand(Commands::ACTIVATE_SCROLL);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Scrolldiagleft(uint8_t start_row, uint8_t end_row)
{
	WriteCommand(Commands::SET_VERTICAL_SCROLL_AREA);
	WriteCommand(0x00);
	WriteCommand(height);

	WriteCommand(Commands::VERTICAL_AND_LEFT_HORIZONTAL_SCROLL);
	WriteCommand(0x00);
	WriteCommand(start_row);
	WriteCommand(0x00);
	WriteCommand(end_row);
	WriteCommand(0x01);
	WriteCommand(Commands::ACTIVATE_SCROLL);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Stopscroll(void)
{
	WriteCommand(Commands::DEACTIVATE_SCROLL);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
InvertDisplay(int i)
{
	if(i) 
		WriteCommand(Commands::INVERTDISPLAY);
  else
		WriteCommand(Commands::NORMALDISPLAY);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawBitmap(int8_t x, int8_t y, const unsigned char* bitmap, int8_t w, int8_t h, int8_t color)
{
	int16_t bytewidth = (w + 7) / 8; // Bitmap scanline pad = whole byte
	uint8_t byte = 0;

	for(int16_t j=0; j<h; j++, y++)
	{
		for(int16_t i=0; i<w; i++)
		{
			if(i & 7)
			{
				byte <<= 1;
			}
			else
			{
				byte = (*(const unsigned char *)(&bitmap[j * bytewidth + i / 8]));
			}
			if(byte & 0x80) DrawPixel(x+i, y, color);
		}
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Init(void) {

	Interface::Init();

	/* Init LCD */
	WriteCommand(0xAE); //display off
	WriteCommand(0x20); //Set Memory Addressing Mode   
	WriteCommand(0x10); //00,Horizontal Addressing Mode;01,Vertical Addressing Mode;10,Page Addressing Mode (RESET);11,Invalid
	WriteCommand(0xB0); //Set Page Start Address for Page Addressing Mode,0-7
	WriteCommand(0xC8); //Set COM Output Scan Direction
	WriteCommand(0x00); //---set low column address
	WriteCommand(0x10); //---set high column address
	WriteCommand(0x40); //--set start line address
	WriteCommand(0x81); //--set contrast control register
	WriteCommand(0xFF);
	WriteCommand(0xA1); //--set segment re-map 0 to 127
	WriteCommand(0xA6); //--set normal display
	WriteCommand(0xA8); //--set multiplex ratio(1 to 64)
	WriteCommand(0x3F); //
	WriteCommand(0xA4); //0xa4,Output follows RAM content;0xa5,Output ignores RAM content
	WriteCommand(0xD3); //-set display offset
	WriteCommand(0x00); //-not offset
	WriteCommand(0xD5); //--set display clock divide ratio/oscillator frequency
	WriteCommand(0xF0); //--set divide ratio
	WriteCommand(0xD9); //--set pre-charge period
	WriteCommand(0x22); //
	WriteCommand(0xDA); //--set com pins hardware configuration
	WriteCommand(0x12);
	WriteCommand(0xDB); //--set vcomh
	WriteCommand(0x20); //0x20,0.77xVcc
	WriteCommand(0x8D); //--set DC-DC enable
	WriteCommand(0x14); //
	WriteCommand(0xAF); //--turn on SSD1306 panel
	

	WriteCommand(Commands::DEACTIVATE_SCROLL);

	/* Clear screen */
	Fill(Black);
	
	/* Update screen */
	UpdateScreen();
	
	/* Set default values */
	CurrentX = 0;
	CurrentY = 0;
	
	/* Initialized OK */
	Initialized = 1;
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
UpdateScreen(void) {
	uint8_t m;
	
	for (m = 0; m < 8; m++) {
		WriteCommand(0xB0 + m);
		WriteCommand(0x00);
		WriteCommand(0x10);
		
		/* Write multi data */
		I2C_WriteMulti(address, 0x40, &Buffer[width * m], width);
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
ToggleInvert(void) {
	uint16_t i;
	
	/* Toggle invert */
	Inverted = !Inverted;
	
	/* Do memory toggle */
	for (i = 0; i < sizeof(Buffer); i++) {
		Buffer[i] = ~Buffer[i];
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Fill(Color color) {
	/* Set memory */
	memset(Buffer, (color == Black) ? 0x00 : 0xFF, sizeof(Buffer));
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawPixel(uint16_t x, uint16_t y, Color color) {
	if (
		x >= width ||
		y >= height
	) {
		/* Error */
		return;
	}
	
	/* Check if pixels are inverted */
	if (Inverted) {
		color = (Color)!color;
	}
	
	/* Set color */
	if (color == White) {
		Buffer[x + (y / 8) * width] |= 1 << (y % 8);
	} else {
		Buffer[x + (y / 8) * width] &= ~(1 << (y % 8));
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
GotoXY(uint16_t x, uint16_t y) {
	/* Set write pointers */
	CurrentX = x;
	CurrentY = y;
}

template<typename Interface, auto address, auto width, auto height>
char ssd1306<Interface, address, width, height>::
Putc(char ch, FontDef_t* Font, Color color) {
	uint32_t i, b, j;
	
	/* Check available space in LCD */
	if (
		width <= (CurrentX + Font->FontWidth) ||
		height <= (CurrentY + Font->FontHeight)
	) {
		/* Error */
		return 0;
	}
	
	/* Go through font */
	for (i = 0; i < Font->FontHeight; i++) {
		b = Font->data[(ch - 32) * Font->FontHeight + i];
		for (j = 0; j < Font->FontWidth; j++) {
			if ((b << j) & 0x8000) {
				DrawPixel(CurrentX + j, (CurrentY + i), (Color) color);
			} else {
				DrawPixel(CurrentX + j, (CurrentY + i), (Color)!color);
			}
		}
	}
	
	/* Increase pointer */
	CurrentX += Font->FontWidth;
	
	/* Return character written */
	return ch;
}

template<typename Interface, auto address, auto width, auto height>
char ssd1306<Interface, address, width, height>::
Puts(char* str, FontDef_t* Font, Color color) {
	/* Write characters */
	while (*str) {
		/* Write character by character */
		if (Putc(*str, Font, color) != *str) {
			/* Return error */
			return *str;
		}
		
		/* Increase string pointer */
		str++;
	}
	
	/* Everything OK, zero should be returned */
	return *str;
}
 
template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, Color c) {
	int16_t dx, dy, sx, sy, err, e2, i, tmp; 
	
	/* Check for overflow */
	if (x0 >= width) {
		x0 = width - 1;
	}
	if (x1 >= width) {
		x1 = width - 1;
	}
	if (y0 >= height) {
		y0 = height - 1;
	}
	if (y1 >= height) {
		y1 = height - 1;
	}
	
	dx = (x0 < x1) ? (x1 - x0) : (x0 - x1); 
	dy = (y0 < y1) ? (y1 - y0) : (y0 - y1); 
	sx = (x0 < x1) ? 1 : -1; 
	sy = (y0 < y1) ? 1 : -1; 
	err = ((dx > dy) ? dx : -dy) / 2; 

	if (dx == 0) {
		if (y1 < y0) {
			tmp = y1;
			y1 = y0;
			y0 = tmp;
		}
		
		if (x1 < x0) {
			tmp = x1;
			x1 = x0;
			x0 = tmp;
		}
		
		/* Vertical line */
		for (i = y0; i <= y1; i++) {
			DrawPixel(x0, i, c);
		}
		
		/* Return from function */
		return;
	}
	
	if (dy == 0) {
		if (y1 < y0) {
			tmp = y1;
			y1 = y0;
			y0 = tmp;
		}
		
		if (x1 < x0) {
			tmp = x1;
			x1 = x0;
			x0 = tmp;
		}
		
		/* Horizontal line */
		for (i = x0; i <= x1; i++) {
			DrawPixel(i, y0, c);
		}
		
		/* Return from function */
		return;
	}
	
	while (1) {
		DrawPixel(x0, y0, c);
		if (x0 == x1 && y0 == y1) {
			break;
		}
		e2 = err; 
		if (e2 > -dx) {
			err -= dy;
			x0 += sx;
		} 
		if (e2 < dy) {
			err += dx;
			y0 += sy;
		} 
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, Color c) {
	/* Check input parameters */
	if (
		x >= width ||
		y >= height
	) {
		/* Return error */
		return;
	}
	
	/* Check width and height */
	if ((x + w) >= width) {
		w = width - x;
	}
	if ((y + h) >= height) {
		h = height - y;
	}
	
	/* Draw 4 lines */
	DrawLine(x, y, x + w, y, c);         /* Top line */
	DrawLine(x, y + h, x + w, y + h, c); /* Bottom line */
	DrawLine(x, y, x, y + h, c);         /* Left line */
	DrawLine(x + w, y, x + w, y + h, c); /* Right line */
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawFilledRectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, Color c) {
	uint8_t i;
	
	/* Check input parameters */
	if (
		x >= width ||
		y >= height
	) {
		/* Return error */
		return;
	}
	
	/* Check width and height */
	if ((x + w) >= width) {
		w = width - x;
	}
	if ((y + h) >= height) {
		h = height - y;
	}
	
	/* Draw lines */
	for (i = 0; i <= h; i++) {
		/* Draw lines */
		DrawLine(x, y + i, x + w, y + i, c);
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, Color color) {
	/* Draw lines */
	DrawLine(x1, y1, x2, y2, color);
	DrawLine(x2, y2, x3, y3, color);
	DrawLine(x3, y3, x1, y1, color);
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawFilledTriangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, Color color) {
	int16_t deltax = 0, deltay = 0, x = 0, y = 0, xinc1 = 0, xinc2 = 0, 
	yinc1 = 0, yinc2 = 0, den = 0, num = 0, numadd = 0, numpixels = 0, 
	curpixel = 0;
	
	deltax = ABS(x2 - x1);
	deltay = ABS(y2 - y1);
	x = x1;
	y = y1;

	if (x2 >= x1) {
		xinc1 = 1;
		xinc2 = 1;
	} else {
		xinc1 = -1;
		xinc2 = -1;
	}

	if (y2 >= y1) {
		yinc1 = 1;
		yinc2 = 1;
	} else {
		yinc1 = -1;
		yinc2 = -1;
	}

	if (deltax >= deltay){
		xinc1 = 0;
		yinc2 = 0;
		den = deltax;
		num = deltax / 2;
		numadd = deltay;
		numpixels = deltax;
	} else {
		xinc2 = 0;
		yinc1 = 0;
		den = deltay;
		num = deltay / 2;
		numadd = deltax;
		numpixels = deltay;
	}

	for (curpixel = 0; curpixel <= numpixels; curpixel++) {
		DrawLine(x, y, x3, y3, color);

		num += numadd;
		if (num >= den) {
			num -= den;
			x += xinc1;
			y += yinc1;
		}
		x += xinc2;
		y += yinc2;
	}
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawCircle(int16_t x0, int16_t y0, int16_t r, Color c) {
	int16_t f = 1 - r;
	int16_t ddF_x = 1;
	int16_t ddF_y = -2 * r;
	int16_t x = 0;
	int16_t y = r;

    DrawPixel(x0, y0 + r, c);
    DrawPixel(x0, y0 - r, c);
    DrawPixel(x0 + r, y0, c);
    DrawPixel(x0 - r, y0, c);

    while (x < y) {
        if (f >= 0) {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x;

        DrawPixel(x0 + x, y0 + y, c);
        DrawPixel(x0 - x, y0 + y, c);
        DrawPixel(x0 + x, y0 - y, c);
        DrawPixel(x0 - x, y0 - y, c);

        DrawPixel(x0 + y, y0 + x, c);
        DrawPixel(x0 - y, y0 + x, c);
        DrawPixel(x0 + y, y0 - x, c);
        DrawPixel(x0 - y, y0 - x, c);
    }
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
DrawFilledCircle(int16_t x0, int16_t y0, int16_t r, Color c) {
	int16_t f = 1 - r;
	int16_t ddF_x = 1;
	int16_t ddF_y = -2 * r;
	int16_t x = 0;
	int16_t y = r;

    DrawPixel(x0, y0 + r, c);
    DrawPixel(x0, y0 - r, c);
    DrawPixel(x0 + r, y0, c);
    DrawPixel(x0 - r, y0, c);
    DrawLine(x0 - r, y0, x0 + r, y0, c);

    while (x < y) {
        if (f >= 0) {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x;

        DrawLine(x0 - x, y0 + y, x0 + x, y0 + y, c);
        DrawLine(x0 + x, y0 - y, x0 - x, y0 - y, c);

        DrawLine(x0 + y, y0 + x, x0 - y, y0 + x, c);
        DrawLine(x0 + y, y0 - x, x0 - y, y0 - x, c);
    }
}
 

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
Clear (void)
{
	Fill (0);
    UpdateScreen();
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
ON(void) {
	WriteCommand(0x8D);  
	WriteCommand(0x14);  
	WriteCommand(0xAF);  
}

template<typename Interface, auto address, auto width, auto height>
void ssd1306<Interface, address, width, height>::
OFF(void) {
	WriteCommand(0x8D);  
	WriteCommand(0x10);
	WriteCommand(0xAE);  
}



