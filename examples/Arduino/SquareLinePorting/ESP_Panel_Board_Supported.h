/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

/* Set to 1 if using a supported board */
#define ESP_PANEL_USE_SUPPORTED_BOARD       (1)         // 0/1

#if ESP_PANEL_USE_SUPPORTED_BOARD
/**
 * Uncomment one of the following macros to select an supported development board. If multiple macros are uncommented
 * at the same time, an error will be prompted during compilation.
 *
 */

/*
 * Espressif Supported Boards (https://www.espressif.com/en/products/devkits):
 *
 *  - BOARD_ESP32_C3_LCDKIT (ESP32-C3-LCDkit): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32c3/esp32-c3-lcdkit/index.html
 *  - BOARD_ESP32_S3_BOX (ESP32-S3-Box): https://github.com/espressif/esp-box/tree/master
 *  - BOARD_ESP32_S3_BOX_3 (ESP32-S3-Box-3 & ESP32-S3-Box-3B): https://github.com/espressif/esp-box/tree/master
 *  - BOARD_ESP32_S3_BOX_3_BETA (ESP32-S3-Box-3(beta)): https://github.com/espressif/esp-box/tree/c4c954888e11250423f083df0067d99e22d59fbe
 *  - BOARD_ESP32_S3_BOX_LITE (ESP32-S3-Box-Lite): https://github.com/espressif/esp-box/tree/master
 *  - BOARD_ESP32_S3_EYE (ESP32-S3-EYE): https://github.com/espressif/esp-who/blob/master/docs/en/get-started/ESP32-S3-EYE_Getting_Started_Guide.md
 *  - BOARD_ESP32_S3_KORVO_2 (ESP32-S3-Korvo-2): https://docs.espressif.com/projects/esp-adf/en/latest/design-guide/dev-boards/user-guide-esp32-s3-korvo-2.html
 *  - BOARD_ESP32_S3_LCD_EV_BOARD (ESP32-S3-LCD-EV-Board(v1.1-v1.4)): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-lcd-ev-board/user_guide_v1.4.html
 *  - BOARD_ESP32_S3_LCD_EV_BOARD_V1_5 (ESP32-S3-LCD-EV-Board(v1.5)): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-lcd-ev-board/user_guide.html
 *  - BOARD_ESP32_S3_LCD_EV_BOARD_2 (ESP32-S3-LCD-EV-Board-2(v1.1-v1.4))): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-lcd-ev-board/user_guide_v1.4.html
 *  - BOARD_ESP32_S3_LCD_EV_BOARD_2_V1_5 (ESP32-S3-LCD-EV-Board-2(v1.5)): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-lcd-ev-board/user_guide.html
 *  - BOARD_ESP32_S3_USB_OTG (ESP32-S3-USB-OTG): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-usb-otg/index.html
 *  - BOARD_ESP32_P4_FUNCTION_EV_BOARD (ESP32-P4-Function-EV-Board): https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32p4/esp32-p4-function-ev-board/index.html
 *
 */
// #define BOARD_ESP32_C3_LCDKIT
// #define BOARD_ESP32_S3_BOX
// #define BOARD_ESP32_S3_BOX_3
// #define BOARD_ESP32_S3_BOX_3_BETA
// #define BOARD_ESP32_S3_BOX_LITE
// #define BOARD_ESP32_S3_EYE
// #define BOARD_ESP32_S3_KORVO_2
// #define BOARD_ESP32_S3_LCD_EV_BOARD
// #define BOARD_ESP32_S3_LCD_EV_BOARD_V1_5
// #define BOARD_ESP32_S3_LCD_EV_BOARD_2
// #define BOARD_ESP32_S3_LCD_EV_BOARD_2_V1_5
// #define BOARD_ESP32_S3_USB_OTG
// #define BOARD_ESP32_P4_FUNCTION_EV_BOARD


/*
 * VIEWE Supported Boards (https://viewedisplay.com/):
 *  
 *  - BOARD_VIEWE_ESP_S3_Knob_LCD_21(UEDX48480021-MD80E):https://viewedisplay.com/product/esp32-2-1-inch-480x480-round-tft-knob-display-rotary-encoder-arduino-lvgl/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_24(UEDX24320028E-WB-A):https://viewedisplay.com/product/esp32-2-4-inch-240x320-rgb-ips-tft-display-touch-screen-arduino-lvgl-wifi-ble-uart-smart-module/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_28(UEDX24320028E-WB-A):https://viewedisplay.com/product/esp32-2-8-inch-240x320-mcu-ips-tft-display-touch-screen-arduino-lvgl-wifi-ble-uart-smart-module/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_35_V1(UEDX24320028E-WB-A):https://viewedisplay.com/product/esp32-3-5-inch-240x320-mcu-ips-tft-display-touch-screen-arduino-lvgl-wifi-ble-uart-smart-module/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_35_V2(UEDX24320028E-WB-A):https://github.com/VIEWESMART/Product-Specification-and-Schematic/blob/main/ESP32/3.5inch/320480/UEDX32480035E-WB-A%20SPEC.pdf
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_40(DX48480040E-WB-A):https://viewedisplay.com/product/esp32-4-inch-tft-display-touch-screen-arduino-lvgl/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_43_V1(UEDX80480070E-WB-A):https://viewedisplay.com/product/esp32-4-3-inch-800x480-rgb-ips-tft-display-touch-screen-arduino-lvgl/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_50_V1(UEDX80480050E-WB-A):https://viewedisplay.com/product/esp32-5-inch-800x480-rgb-ips-tft-display-touch-screen-arduino-lvgl/
 *  - BOARD_VIEWE_ESP_S3_Touch_LCD_70(UEDX80480070E-WB-A):https://viewedisplay.com/product/esp32-7-inch-800x480-rgb-ips-tft-display-touch-screen-arduino-lvgl-uart/
 *
 */
// #define BOARD_UEDX24240013_MD50E
// #define BOARD_UEDX48480021_MD80E
#define BOARD_UEDX48480021_MD80ET
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_24  
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_28 
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_35_V1  //The resolution is 240*320
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_35_V2     //The resolution is 320*480
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_40
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_43_V1 //The resolution is 800*480
//  #define BOARD_VIEWE_ESP_S3_Touch_LCD_43_V2 //The resolution is 480*272
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_50_V1
// #define BOARD_VIEWE_ESP_S3_Touch_LCD_70

/*
The following products control IM through software
*/
#if defined(BOARD_VIEWE_ESP_S3_Touch_LCD_24) || \
    defined(BOARD_VIEWE_ESP_S3_Touch_LCD_28) || \
    defined(BOARD_VIEWE_ESP_S3_Touch_LCD_35_V1) || \
    defined(BOARD_VIEWE_ESP_S3_Touch_LCD_35_V2)
#define IM
#define IM0 47
#define IM1 48
#endif

#if defined(BOARD_UEDX48480021_MD80ET) || defined(BOARD_UEDX48480021_MD80E)
#define KNOB21
#endif
#if defined(BOARD_UEDX24240013_MD50E)
#define KNOB13
#endif
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////// File Version ///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 * Do not change the following versions, they are used to check if the configurations in this file are compatible with
 * the current version of `ESP_Panel_Board_Supported.h` in the library. The detailed rules are as follows:
 *
 *   1. If the major version is not consistent, then the configurations in this file are incompatible with the library
 *      and must be replaced with the file from the library.
 *   2. If the minor version is not consistent, this file might be missing some new configurations, which will be set to
 *      default values. It is recommended to replace it with the file from the library.
 *   3. If the patch version is not consistent, it will not affect normal functionality.
 *
 */
#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_MAJOR 0
#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_MINOR 7
#define ESP_PANEL_BOARD_SUPPORTED_FILE_VERSION_PATCH 0

#endif
