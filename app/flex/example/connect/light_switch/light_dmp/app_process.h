/***************************************************************************//**
 * @file
 * @brief app_process.h
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/
#ifndef APP_PROCESS_H
#define APP_PROCESS_H

// -----------------------------------------------------------------------------
//                                   Includes
// -----------------------------------------------------------------------------
#include "sl_light_switch.h"
// -----------------------------------------------------------------------------
//                              Macros and Typedefs
// -----------------------------------------------------------------------------

/// End nodes have unlimited time for connecting, after the light formed the network
#define UNLIMETED_CONNECTION_TIME         (0xFF)
/// 100ms timer for the state machine
#define STATE_MACHINE_TIMER_MS            (100)

// -----------------------------------------------------------------------------
//                                Global Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Public Function Declarations
// -----------------------------------------------------------------------------
/**************************************************************************//**
 * The function is used for Application logic.
 *
 * @param None
 * @returns None
 *
 * The function is used for Application logic.
 * It is called infinitely.
 *****************************************************************************/
void app_process_action(void);

/**************************************************************************//**
 * This function handles the main state machine
 *
 * @param None
 * @returns None
 *****************************************************************************/
void state_machine_handler(void);

/**************************************************************************//**
 * Toggle the light state, and blink the LED on the board
 *
 * @param None
 * @returns None
 *****************************************************************************/
void toggle_light_state();

#endif // APP_PROCESS_H
