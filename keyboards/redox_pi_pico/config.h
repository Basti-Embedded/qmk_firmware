// Copyright 2022 xerootg
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// //we are using hardware serial, so lets undef the softserial used otherwise

/* serial.c configuration for split keyboard */

#define MASTER_LEFT

/* pin which decides the half of the split keyboard*/
#define SPLIT_HAND_PIN GP28

/* serial configuration */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
