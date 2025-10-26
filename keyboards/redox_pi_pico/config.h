#pragma once

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Oneshot timeout (adjust as needed) */
#define ONESHOT_TIMEOUT 500

/*
  Split serial (RP2040) configuration

  Default: SINGLE-WIRE (half-duplex) using GP0.
  To switch to FULL-DUPLEX (two-wire) using GP0<->GP0 & GP1<->GP1,
  comment/uncomment the blocks shown below.
*/

/* ---------------------------
   DEFAULT: SINGLE-WIRE (HALF-DUPLEX)
   ---------------------------
   - Uses one physical wire between halves on GP0.
   - Pin swap is enabled so halves swap TX/RX roles automatically.
   - Both RX and TX are set to the same GP0 pin.
*/
#undef SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_PIN_SWAP
#define SERIAL_USART_RX_PIN GP0
#define SERIAL_USART_TX_PIN GP0

/* ---------------------------
   To use FULL-DUPLEX (two-wire):
   - Comment out the SINGLE-WIRE block above (the 3 defines).
   - Uncomment the three lines below.
   --------------------------- */
/*
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_RX_PIN GP0
#define SERIAL_USART_TX_PIN GP1
*/

/* Optional: specify UART driver if needed for your build:
   #define SERIAL_USART_DRIVER UART0
*/
