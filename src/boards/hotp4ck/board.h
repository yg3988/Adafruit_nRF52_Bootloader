/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef HOTP4CK_H
#define HOTP4CK_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))
//#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       _PINNUM(0, 31)
#define LED_STATE_ON          1

/*
#define LED_NEOPIXEL           _PINNUM(0, 16)
#define NEOPIXELS_NUMBER      1
#define BOARD_RGB_BRIGHTNESS  0x040404
*/

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(0, 18) // RESET
#define BUTTON_2              _PINNUM(0, 21) // unconnected
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "Hotp4ck"
#define BLEDIS_MODEL          "Hotp4ck"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1209
#define USB_DESC_UF2_PID       0x4850
#define USB_DESC_CDC_ONLY_PID  0x4850

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "Hotp4ck"
#define UF2_VOLUME_LABEL      "HOTP4CK"
//https://github.com/microsoft/uf2#files-exposed-by-bootloaders
//The Board-ID field is machine-readable and 
//consists of a number of dash-separated tokens. 
//The first token is the CPU type, 
//second is the board type, 
//and third is the board revision. 
//More tokens can be also added.
#define UF2_BOARD_ID          "nRF52840-Hotp4ck-A" 
#define UF2_INDEX_URL         "https://github.com/yg3988/"

#endif // HOTP4CK_H
