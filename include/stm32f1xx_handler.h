/*
 * stm32f1xx_handler.h
 *
 *  Created on: Jan 8, 2018
 *      Author: technix
 */

#ifndef IRQN_HANDLER

#include <stm32f1xx_it.h>

#else

#if defined(STM32F100xB)
  #include "stm32f100xb_handler.h"
#elif defined(STM32F100xE)
  #include "stm32f100xe_handler.h"
#elif defined(STM32F101x6)
  #include "stm32f101x6_handler.h"
#elif defined(STM32F101xB)
  #include "stm32f101xb_handler.h"
#elif defined(STM32F101xE)
  #include "stm32f101xe_handler.h"
#elif defined(STM32F101xG)
  #include "stm32f101xg_handler.h"
#elif defined(STM32F102x6)
  #include "stm32f102x6_handler.h"
#elif defined(STM32F102xB)
  #include "stm32f102xb_handler.h"
#elif defined(STM32F103x6)
  #include "stm32f103x6_handler.h"
#elif defined(STM32F103xB)
  #include "stm32f103xb_handler.h"
#elif defined(STM32F103xE)
  #include "stm32f103xe_handler.h"
#elif defined(STM32F103xG)
  #include "stm32f103xg_handler.h"
#elif defined(STM32F105xC)
  #include "stm32f105xc_handler.h"
#elif defined(STM32F107xC)
  #include "stm32f107xc_handler.h"
#else
 #error "Please select first the target STM32F1xx device used in your application (in stm32f1xx.h file)"
#endif

#endif
