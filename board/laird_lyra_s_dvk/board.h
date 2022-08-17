/* Copyright 2022 Wirepas Ltd. All Rights Reserved.
 *
 * See file LICENSE.txt for full license details.
 *
 */

// Board definition for Laird Connectivity's Lyra S (SIP) DVK with part number 453-00091-K1.
// See https://www.lairdconnect.com/documentation/user-guide-lyra-s-development-kit.
#ifndef BOARD_LAIRD_LYRA_S_DVK_BOARD_H_
#define BOARD_LAIRD_LYRA_S_DVK_BOARD_H_

// Waps usart defines
#define BOARD_USART_ID                  0

// Use if Lyra S DVK Switch (SW1) Position is C-DEV (Default).
#define BOARD_USART_GPIO_PORT           GPIO_PORTA
#define BOARD_USART_TX_PIN              0
#define BOARD_USART_RX_PIN              7

// Use if Lyra S DVK Switch (SW1) Position is AT / BGx.
// #define BOARD_USART_GPIO_PORT           GPIO_PORTA
// #define BOARD_USART_TX_PIN              0
// #define BOARD_USART_RX_PIN              3

// VCOM port only supports 115200 baudrate
// This speed will be used independently of UART_BAUDRATE flag value
#define BOARD_USART_FORCE_BAUDRATE      115200

// List of GPIO ports and pins for the LEDs on the board:
#define BOARD_LED_PIN_LIST {{GPIO_PORTA, 8}}

// Active high polarity for LEDs
#define BOARD_LED_ACTIVE_LOW false

// List of ext. ints, GPIO ports and pins for buttons on the board:
// NOTE! EFR32xG22 can wake up from deep sleep (EM2) using GPIO input trigger
//       only from A or B ports. Having the button in port C prevents button
//       to be used for waking up from deep sleep.
#define BOARD_BUTTON_PIN_LIST           {{8 GPIO_PORTA, 6}}

// Active low polarity for buttons
#define BOARD_BUTTON_ACTIVE_LOW         true

// Board has external pull-up for buttons
#define BOARD_BUTTON_INTERNAL_PULL      false

// Buttons use even external interrupts
#define BOARD_BUTTON_USE_EVEN_INT       true

// Buttons use even external interrupts
//#define BOARD_BUTTON_USE_EVEN_INT true

#endif /* BOARD_LAIRD_LYRA_S_DVK_BOARD_H_ */
