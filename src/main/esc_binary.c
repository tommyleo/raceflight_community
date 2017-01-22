/* 
 * This file is part of RaceFlight. 
 * 
 * RaceFlight is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 * 
 * RaceFlight is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public License 
 * along with RaceFlight.  If not, see <http://www.gnu.org/licenses/>.
 * You should have received a copy of the GNU General Public License 
 * along with RaceFlight.  If not, see <http://www.gnu.org/licenses/>.
 */ 
#include <stdint.h>
#include <string.h>
#include "platform.h"
#ifdef ESC_HEX
#if defined(STM32F40_41xxx)
#define EXTRA_ESC_HEX 
#endif
#include "esc_binary.h"
#include "eschex/esc_source_list.h"
const uint8_t* escHexList[] = {
#include "eschex/esc_list.h"
    NULL,
};
#endif