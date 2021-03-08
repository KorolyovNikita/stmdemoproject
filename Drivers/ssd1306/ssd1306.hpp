#pragma once


#include <stdlib.h>
#include <string.h>
#include <cstdint> 

#include "fonts.hpp"
#include "i2c.hpp"

#define forceinline  __attribute__((always_inline)) inline

template<typename Interface, auto address, auto width, auto height>
struct ssd1306
{
  inline static uint8_t Buffer[width * height / 8];

  inline static uint8_t CurrentX;
	inline static uint8_t CurrentY;
	inline static uint8_t Inverted;

  enum Color{
    Black, /*!< Black color, no pixel */
    White  /*!< Pixel is set. Color depends on LCD */
  };

  enum Commands : uint8_t{
    RIGHT_HORIZONTAL_SCROLL               = 0x26,
    LEFT_HORIZONTAL_SCROLL                = 0x27,
    VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL  = 0x29,
    VERTICAL_AND_LEFT_HORIZONTAL_SCROLL   = 0x2A,
    DEACTIVATE_SCROLL                     = 0x2E, // Stop scroll
    ACTIVATE_SCROLL                       = 0x2F, // Start scroll
    SET_VERTICAL_SCROLL_AREA              = 0xA3, // Set scroll range

    NORMALDISPLAY                         = 0xA6,
    INVERTDISPLAY                         = 0xA7
  };


  static void WriteCommand(uint8_t cmd)
  {
    Interface::Start(address, i2cDirection::Write);
    Interface::WriteByte(0x00);
    Interface::WriteByte(cmd);
    Interface::Stop();
  }

  static void WriteData(const uint8_t* data, uint16_t size)
  {
    Interface::Start(address, i2cDirection::Write);
    Interface::WriteByte(0x40);
    Interface::WriteData(data, size);
    Interface::Stop();
  }

  static constexpr uint8_t initCommands[] = {
    0xAE, //display off
    0x20, //Set Memory Addressing Mode   
    0x10, //00,Horizontal Addressing Mode;01,Vertical Addressing Mode;10,Page Addressing Mode (RESET,11,Invalid
    0xB0, //Set Page Start Address for Page Addressing Mode,0-7
    0xC8, //Set COM Output Scan Direction
    0x00, //---set low column address
    0x10, //---set high column address
    0x40, //--set start line address
    0x81, //--set contrast control register
    0xFF,
    0xA1, //--set segment re-map 0 to 127
    0xA6, //--set normal display
    0xA8, //--set multiplex ratio(1 to 64)
    0x3F, //
    0xA4, //0xa4,Output follows RAM content;0xa5,Output ignores RAM content
    0xD3, //-set display offset
    0x00, //-not offset
    0xD5, //--set display clock divide ratio/oscillator frequency
    0xF0, //--set divide ratio
    0xD9, //--set pre-charge period
    0x22, //
    0xDA, //--set com pins hardware configuration
    0x12,
    0xDB, //--set vcomh
    0x20, //0x20,0.77xVcc
    0x8D, //--set DC-DC enable
    0x14, //
    0xAF, //--turn on SSD1306 panel
    Commands::DEACTIVATE_SCROLL
  };

  static void Init()
  {
    for(auto cmd: initCommands) {
      WriteCommand(cmd);
    }

    /* Clear screen */
    Fill(Black);
    
    /* Update screen */
    UpdateScreen();
  }

  static void UpdateScreen(void)
  {
    for (uint8_t m = 0; m < 8; m++) {
      WriteCommand(0xB0 + m);
      WriteCommand(0x00);
      WriteCommand(0x10);
      
      /* Write multi data */
      WriteData(&Buffer[width * m], width);
    }
  }

  static void DrawPixel(uint8_t x, uint8_t y, Color color) {
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

  static void Fill(Color color) {
    /* Set memory */
    memset(Buffer, (color == Black) ? 0x00 : 0xFF, sizeof(Buffer));
  }

  static char Putc(char ch, FontDef_t &Font, Color color)
  {
  uint32_t i, b, j;
	
	/* Check available space in LCD */
	if (
		width <= (CurrentX + Font.FontWidth) ||
		height <= (CurrentY + Font.FontHeight)
	) {
		/* Error */
		return 0;
	}
	
	/* Go through font */
	for (i = 0; i < Font.FontHeight; i++) {
		b = Font.data[(ch - 32) * Font.FontHeight + i];
		for (j = 0; j < Font.FontWidth; j++) {
			if ((b << j) & 0x8000) {
				DrawPixel(CurrentX + j, (CurrentY + i), (Color) color);
			} else {
				DrawPixel(CurrentX + j, (CurrentY + i), (Color)!color);
			}
		}
	}
	
	/* Increase pointer */
	CurrentX += Font.FontWidth;
	
	/* Return character written */
	return ch;
  }

  static char Puts(const char* str, FontDef_t &Font, Color color)
  {
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

  static void DrawBitmap(int8_t x, int8_t y, const unsigned char* bitmap, int8_t w, int8_t h, int8_t color);
};
