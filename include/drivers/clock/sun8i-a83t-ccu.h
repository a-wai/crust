/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_CLOCK_SUN8I_A83T_CCU_H
#define DRIVERS_CLOCK_SUN8I_A83T_CCU_H

enum {
	CLK_PLL_PERIPH0,
	CLK_APB2,
	CLK_BUS_MSGBOX,
	CLK_BUS_PIO,
#if CONFIG(SERIAL_DEV_UART0)
	CLK_BUS_UART0,
#elif CONFIG(SERIAL_DEV_UART1)
	CLK_BUS_UART1,
#elif CONFIG(SERIAL_DEV_UART2)
	CLK_BUS_UART2,
#elif CONFIG(SERIAL_DEV_UART3)
	CLK_BUS_UART3,
#elif CONFIG(SERIAL_DEV_UART4)
	CLK_BUS_UART4,
#endif
	SUN8I_A83T_CCU_CLOCKS
};

#endif /* DRIVERS_CLOCK_SUN8I_A83T_CCU_H */
