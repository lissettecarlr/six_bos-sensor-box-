/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
    (C)2013 Semtech

Description: Delay functions implementation

License: Revised BSD License, see LICENSE.TXT file include in the project

Maintainer: Miguel Luis and Gregory Cristian
*/
#ifndef __DELAY_H__
#define __DELAY_H__

#include "type.h"

/*! 
 * Blocking delay of "s" seconds
 */
void Delay( uint32_t s );

/*! 
 * Blocking delay of "ms" milliseconds
 */
void DelayMs( uint32_t ms );

/*! 
 * Blocking delay of "us" microseconds
 */
void DelayUs( uint32_t us );

#endif // __DELAY_H__

