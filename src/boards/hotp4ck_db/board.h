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

#ifndef HOTP4CK_DB_H
#define HOTP4CK_DB_H

#define UICR_REGOUT0_VALUE    UICR_REGOUT0_VOUT_3V3
/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER             0//3
//#define LED_PRIMARY_PIN         PINNUM(1, 13) /* Green led marked D1 on the board */
//#define LED_SECONDARY_PIN       PINNUM(1, 14) /* Red led marked D2 on the board */
//#define LED_TERTIARY_PIN        PINNUM(1, 15) /* Blue led marked D3 on the board */

/* There are one more unpopulated LEDs, but for the purposes of bootloader that doesn't matter. */
#define LED_STATE_ON            0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/

#define BUTTONS_NUMBER      1
#define BUTTON_1            PINNUM(0, 18) //RESET
// #define BUTTON_DFU     PINNUM(0, 11)
// #define BUTTON_DFU_OTA PINNUM(0, 12)
// #define BUTTON_3       PINNUM(0, 24)
// #define BUTTON_4       PINNUM(0, 25)
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER     "HOTP4CK"
#define BLEDIS_MODEL            "HOTP4CK_DEV"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+

#define USB_DESC_VID           0x1209
#define USB_DESC_UF2_PID       0x4850
#define USB_DESC_CDC_ONLY_PID  0x4850

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME        "HOTP4CK_DEV_BOARD"
#define UF2_VOLUME_LABEL        "HOTP4CK_DEV"
#define UF2_BOARD_ID            "nRF52840-MDBT50Q-1MV2"
#define UF2_INDEX_URL           "https://www.raytac.com/product/ins.php?index_id=81"

#endif // HOTP4CK_DB_H
