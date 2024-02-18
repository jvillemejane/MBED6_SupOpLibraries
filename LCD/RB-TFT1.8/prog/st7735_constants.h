/**
 * FILENAME :        st7735_constants.h          
 *
 * DESCRIPTION :
 *       TFT Joy-It RB-TFT1.8 - 1.8' LCD display - Library
 *
 * NOTES :
 *       Developped by Villou / LEnsE
 **
 * AUTHOR :    Julien VILLEMEJANE        START DATE :    17/feb/2024
 *
 *       LEnsE / Institut d'Optique Graduate School
 *          http://lense.institutoptique.fr/
 *
 *  @see : https://github.com/Matiasus/ST7735
 *  @see : https://www.displayfuture.com/Display/datasheet/controller/ST7735.pdf
 */
 
#ifndef __ST7735_CONSTANTS_H__
#define __ST7735_CONSTANTS_H__

  // Success / Error
  // -----------------------------------
  #define ST7735_SUCCESS        true
  #define ST7735_ERROR          false

#define 	ST7735_SPI_FREQ		2000000

  // Command definition
  // -----------------------------------
  #define DELAY                 0x80
  
  #define NOP                   0x00
  #define SWRESET               0x01
  #define RDDID                 0x04
  #define RDDST                 0x09

  #define SLPIN                 0x10
  #define SLPOUT                0x11
  #define PTLON                 0x12
  #define NORON                 0x13

  #define INVOFF                0x20
  #define INVON                 0x21
  #define DISPOFF               0x28
  #define DISPON                0x29
  #define RAMRD                 0x2E
  #define CASET                 0x2A
  #define RASET                 0x2B
  #define RAMWR                 0x2C

  #define PTLAR                 0x30
  #define MADCTL                0x36
  #define COLMOD                0x3A

  #define FRMCTR1               0xB1
  #define FRMCTR2               0xB2
  #define FRMCTR3               0xB3
  #define INVCTR                0xB4
  #define DISSET5               0xB6

  #define PWCTR1                0xC0
  #define PWCTR2                0xC1
  #define PWCTR3                0xC2
  #define PWCTR4                0xC3
  #define PWCTR5                0xC4
  #define VMCTR1                0xC5

  #define RDID1                 0xDA
  #define RDID2                 0xDB
  #define RDID3                 0xDC
  #define RDID4                 0xDD

  #define GMCTRP1               0xE0
  #define GMCTRN1               0xE1

  #define PWCTR6                0xFC

  // Colors
  // -----------------------------------
  #define ST7735_BLACK          0x0000
  #define ST7735_WHITE          0xFFFF
  #define ST7735_BLUE           0xF000
  #define ST7735_GREEN          0x0F00
  #define ST7735_RED            0x00F0

  // AREA definition
  // -----------------------------------
  #define MAX_X                 161               // max columns / MV = 0 in MADCTL
  #define MAX_Y                 130               // max rows / MV = 0 in MADCTL
  #define SIZE_X                MAX_X - 1         // columns max counter
  #define SIZE_Y                MAX_Y - 1         // rows max counter
  #define CACHE_SIZE_MEM        (MAX_X * MAX_Y)   // whole pixels
  #define CHARS_COLS_LEN        5                 // number of columns for chars
  #define CHARS_ROWS_LEN        8                 // number of rows for chars


  /** @enum Font sizes */
  enum Size {
    // 1x 
    NORMAL = 1,
    // 2x 
    LARGE = 2,
    // 4x 
    HUGE = 4
	
  };

#endif