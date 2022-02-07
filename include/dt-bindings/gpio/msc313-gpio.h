/* SPDX-License-Identifier: GPL-2.0-only OR BSD-2-Clause */
/*
 * GPIO definitions for MStar/SigmaStar MSC313 and later SoCs
 *
 * Copyright (C) 2020 Daniel Palmer <daniel@thingy.jp>
 */

#ifndef _DT_BINDINGS_MSC313_GPIO_H
#define _DT_BINDINGS_MSC313_GPIO_H

#define MSC313_GPIO_FUART	0
#define MSC313_GPIO_FUART_RX	(MSC313_GPIO_FUART + 0)
#define MSC313_GPIO_FUART_TX	(MSC313_GPIO_FUART + 1)
#define MSC313_GPIO_FUART_CTS	(MSC313_GPIO_FUART + 2)
#define MSC313_GPIO_FUART_RTS	(MSC313_GPIO_FUART + 3)

#define MSC313_GPIO_SR		(MSC313_GPIO_FUART_RTS + 1)
#define MSC313_GPIO_SR_IO2	(MSC313_GPIO_SR + 0)
#define MSC313_GPIO_SR_IO3	(MSC313_GPIO_SR + 1)
#define MSC313_GPIO_SR_IO4	(MSC313_GPIO_SR + 2)
#define MSC313_GPIO_SR_IO5	(MSC313_GPIO_SR + 3)
#define MSC313_GPIO_SR_IO6	(MSC313_GPIO_SR + 4)
#define MSC313_GPIO_SR_IO7	(MSC313_GPIO_SR + 5)
#define MSC313_GPIO_SR_IO8	(MSC313_GPIO_SR + 6)
#define MSC313_GPIO_SR_IO9	(MSC313_GPIO_SR + 7)
#define MSC313_GPIO_SR_IO10	(MSC313_GPIO_SR + 8)
#define MSC313_GPIO_SR_IO11	(MSC313_GPIO_SR + 9)
#define MSC313_GPIO_SR_IO12	(MSC313_GPIO_SR + 10)
#define MSC313_GPIO_SR_IO13	(MSC313_GPIO_SR + 11)
#define MSC313_GPIO_SR_IO14	(MSC313_GPIO_SR + 12)
#define MSC313_GPIO_SR_IO15	(MSC313_GPIO_SR + 13)
#define MSC313_GPIO_SR_IO16	(MSC313_GPIO_SR + 14)
#define MSC313_GPIO_SR_IO17	(MSC313_GPIO_SR + 15)

#define MSC313_GPIO_SD		(MSC313_GPIO_SR_IO17 + 1)
#define MSC313_GPIO_SD_CLK	(MSC313_GPIO_SD + 0)
#define MSC313_GPIO_SD_CMD	(MSC313_GPIO_SD + 1)
#define MSC313_GPIO_SD_D0	(MSC313_GPIO_SD + 2)
#define MSC313_GPIO_SD_D1	(MSC313_GPIO_SD + 3)
#define MSC313_GPIO_SD_D2	(MSC313_GPIO_SD + 4)
#define MSC313_GPIO_SD_D3	(MSC313_GPIO_SD + 5)

#define MSC313_GPIO_I2C1	(MSC313_GPIO_SD_D3 + 1)
#define MSC313_GPIO_I2C1_SCL	(MSC313_GPIO_I2C1 + 0)
#define MSC313_GPIO_I2C1_SDA	(MSC313_GPIO_I2C1 + 1)

#define MSC313_GPIO_SPI0	(MSC313_GPIO_I2C1_SDA + 1)
#define MSC313_GPIO_SPI0_CZ	(MSC313_GPIO_SPI0 + 0)
#define MSC313_GPIO_SPI0_CK	(MSC313_GPIO_SPI0 + 1)
#define MSC313_GPIO_SPI0_DI	(MSC313_GPIO_SPI0 + 2)
#define MSC313_GPIO_SPI0_DO	(MSC313_GPIO_SPI0 + 3)

/* SSD20x */
#define SSD20XD_GPIO_FUART	0
#define SSD20XD_GPIO_FUART_RX	(SSD20XD_GPIO_FUART + 0)
#define SSD20XD_GPIO_FUART_TX	(SSD20XD_GPIO_FUART + 1)
#define SSD20XD_GPIO_FUART_CTS	(SSD20XD_GPIO_FUART + 2)
#define SSD20XD_GPIO_FUART_RTS	(SSD20XD_GPIO_FUART + 3)

#define SSD20XD_GPIO_SD		(SSD20XD_GPIO_FUART_RTS + 1)
#define SSD20XD_GPIO_SD_CLK	(SSD20XD_GPIO_SD + 0)
#define SSD20XD_GPIO_SD_CMD	(SSD20XD_GPIO_SD + 1)
#define SSD20XD_GPIO_SD_D0	(SSD20XD_GPIO_SD + 2)
#define SSD20XD_GPIO_SD_D1	(SSD20XD_GPIO_SD + 3)
#define SSD20XD_GPIO_SD_D2	(SSD20XD_GPIO_SD + 4)
#define SSD20XD_GPIO_SD_D3	(SSD20XD_GPIO_SD + 5)

#define SSD20XD_GPIO_UART0	(SSD20XD_GPIO_SD_D3 + 1)
#define SSD20XD_GPIO_UART0_RX	(SSD20XD_GPIO_UART0 + 0)
#define SSD20XD_GPIO_UART0_TX	(SSD20XD_GPIO_UART0 + 1)

#define SSD20XD_GPIO_UART1	(SSD20XD_GPIO_UART0_TX + 1)
#define SSD20XD_GPIO_UART1_RX	(SSD20XD_GPIO_UART1 + 0)
#define SSD20XD_GPIO_UART1_TX	(SSD20XD_GPIO_UART1 + 1)

#define SSD20XD_GPIO_TTL	(SSD20XD_GPIO_UART1_TX + 1)
#define SSD20XD_GPIO_TTL0	(SSD20XD_GPIO_TTL + 0)
#define SSD20XD_GPIO_TTL1	(SSD20XD_GPIO_TTL + 1)
#define SSD20XD_GPIO_TTL2	(SSD20XD_GPIO_TTL + 2)
#define SSD20XD_GPIO_TTL3	(SSD20XD_GPIO_TTL + 3)
#define SSD20XD_GPIO_TTL4	(SSD20XD_GPIO_TTL + 4)
#define SSD20XD_GPIO_TTL5	(SSD20XD_GPIO_TTL + 5)
#define SSD20XD_GPIO_TTL6	(SSD20XD_GPIO_TTL + 6)
#define SSD20XD_GPIO_TTL7	(SSD20XD_GPIO_TTL + 7)
#define SSD20XD_GPIO_TTL8	(SSD20XD_GPIO_TTL + 8)
#define SSD20XD_GPIO_TTL9	(SSD20XD_GPIO_TTL + 9)
#define SSD20XD_GPIO_TTL10	(SSD20XD_GPIO_TTL + 10)
#define SSD20XD_GPIO_TTL11	(SSD20XD_GPIO_TTL + 11)
#define SSD20XD_GPIO_TTL12	(SSD20XD_GPIO_TTL + 12)
#define SSD20XD_GPIO_TTL13	(SSD20XD_GPIO_TTL + 13)
#define SSD20XD_GPIO_TTL14	(SSD20XD_GPIO_TTL + 14)
#define SSD20XD_GPIO_TTL15	(SSD20XD_GPIO_TTL + 15)
#define SSD20XD_GPIO_TTL16	(SSD20XD_GPIO_TTL + 16)
#define SSD20XD_GPIO_TTL17	(SSD20XD_GPIO_TTL + 17)
#define SSD20XD_GPIO_TTL18	(SSD20XD_GPIO_TTL + 18)
#define SSD20XD_GPIO_TTL19	(SSD20XD_GPIO_TTL + 19)
#define SSD20XD_GPIO_TTL20	(SSD20XD_GPIO_TTL + 20)
#define SSD20XD_GPIO_TTL21	(SSD20XD_GPIO_TTL + 21)
#define SSD20XD_GPIO_TTL22	(SSD20XD_GPIO_TTL + 22)
#define SSD20XD_GPIO_TTL23	(SSD20XD_GPIO_TTL + 23)
#define SSD20XD_GPIO_TTL24	(SSD20XD_GPIO_TTL + 24)
#define SSD20XD_GPIO_TTL25	(SSD20XD_GPIO_TTL + 25)
#define SSD20XD_GPIO_TTL26	(SSD20XD_GPIO_TTL + 26)
#define SSD20XD_GPIO_TTL27	(SSD20XD_GPIO_TTL + 27)

#define SSD20XD_GPIO_GPIO	(SSD20XD_GPIO_TTL27 + 1)
#define SSD20XD_GPIO_GPIO0	(SSD20XD_GPIO_GPIO + 0)
#define SSD20XD_GPIO_GPIO1	(SSD20XD_GPIO_GPIO + 1)
#define SSD20XD_GPIO_GPIO2	(SSD20XD_GPIO_GPIO + 2)
#define SSD20XD_GPIO_GPIO3	(SSD20XD_GPIO_GPIO + 3)
#define SSD20XD_GPIO_GPIO4	(SSD20XD_GPIO_GPIO + 4)
#define SSD20XD_GPIO_GPIO5	(SSD20XD_GPIO_GPIO + 5)
#define SSD20XD_GPIO_GPIO6	(SSD20XD_GPIO_GPIO + 6)
#define SSD20XD_GPIO_GPIO7	(SSD20XD_GPIO_GPIO + 7)
#define SSD20XD_GPIO_GPIO10	(SSD20XD_GPIO_GPIO + 8)
#define SSD20XD_GPIO_GPIO11	(SSD20XD_GPIO_GPIO + 9)
#define SSD20XD_GPIO_GPIO12	(SSD20XD_GPIO_GPIO + 10)
#define SSD20XD_GPIO_GPIO13	(SSD20XD_GPIO_GPIO + 11)
#define SSD20XD_GPIO_GPIO14	(SSD20XD_GPIO_GPIO + 12)
#define SSD20XD_GPIO_GPIO85	(SSD20XD_GPIO_GPIO + 13)
#define SSD20XD_GPIO_GPIO86	(SSD20XD_GPIO_GPIO + 14)
#define SSD20XD_GPIO_GPIO90	(SSD20XD_GPIO_GPIO + 15)

#endif /* _DT_BINDINGS_MSC313_GPIO_H */
