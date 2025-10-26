#pragma once

/* key matrix size - Split keyboard uses 10 rows total (5 per half) */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* Oneshot timeout (adjust as needed) */
#define ONESHOT_TIMEOUT 500

/*
  Split serial (RP2040) configuration

  SINGLE-WIRE MODE (default): Comment out or delete the line below
  FULL-DUPLEX MODE: Uncomment the line below

  Hardware wiring:
  - Single-wire: Connect GP0 (left) to GP0 (right) with one wire
  - Full-duplex: Connect GP0 (left) to GP0 (right) AND GP1 (left) to GP1 (right)
*/

// #define USE_FULL_DUPLEX

#ifdef USE_FULL_DUPLEX
    // FULL-DUPLEX: Two wires (GP0<->GP0 and GP1<->GP1)
    #define SERIAL_USART_FULL_DUPLEX
    #define SERIAL_USART_RX_PIN GP0
    #define SERIAL_USART_TX_PIN GP1
#else
    // SINGLE-WIRE: One wire (GP0<->GP0) with pin swap
    #undef SERIAL_USART_FULL_DUPLEX
    #define SERIAL_USART_PIN_SWAP
    #define SERIAL_USART_RX_PIN GP0
    #define SERIAL_USART_TX_PIN GP0
#endif

/* Specify UART driver for RP2040 */
#define SERIAL_USART_DRIVER SIOD0
#define SERIAL_USART_TX_PAL_MODE 2  // UART function

/* Split Keyboard */
#define SPLIT_HAND_PIN GP28
