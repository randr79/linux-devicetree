/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2015 Freescale Semiconductor, Inc.
 */

#ifndef __DT_BINDINGS_CLOCK_IMX6UL_H
#define __DT_BINDINGS_CLOCK_IMX6UL_H

#define IMX6UL_CLK_DUMMY		0
#define IMX6UL_CLK_CKIL			1
#define IMX6UL_CLK_CKIH			2
#define IMX6UL_CLK_OSC			3
#define IMX6UL_PLL1_BYPASS_SRC		4
#define IMX6UL_PLL2_BYPASS_SRC		5
#define IMX6UL_PLL3_BYPASS_SRC		6
#define IMX6UL_PLL4_BYPASS_SRC		7
#define IMX6UL_PLL5_BYPASS_SRC		8
#define IMX6UL_PLL6_BYPASS_SRC		9
#define IMX6UL_PLL7_BYPASS_SRC		10
#define IMX6UL_CLK_PLL1			11
#define IMX6UL_CLK_PLL2			12
#define IMX6UL_CLK_PLL3			13
#define IMX6UL_CLK_PLL4			14
#define IMX6UL_CLK_PLL5			15
#define IMX6UL_CLK_PLL6			16
#define IMX6UL_CLK_PLL7			17
#define IMX6UL_PLL1_BYPASS		18
#define IMX6UL_PLL2_BYPASS		19
#define IMX6UL_PLL3_BYPASS		20
#define IMX6UL_PLL4_BYPASS		21
#define IMX6UL_PLL5_BYPASS		22
#define IMX6UL_PLL6_BYPASS		23
#define IMX6UL_PLL7_BYPASS		24
#define IMX6UL_CLK_PLL1_SYS		25
#define IMX6UL_CLK_PLL2_BUS		26
#define IMX6UL_CLK_PLL3_USB_OTG		27
#define IMX6UL_CLK_PLL4_AUDIO		28
#define IMX6UL_CLK_PLL5_VIDEO		29
#define IMX6UL_CLK_PLL6_ENET		30
#define IMX6UL_CLK_PLL7_USB_HOST	31
#define IMX6UL_CLK_USBPHY1		32
#define IMX6UL_CLK_USBPHY2		33
#define IMX6UL_CLK_USBPHY1_GATE		34
#define IMX6UL_CLK_USBPHY2_GATE		35
#define IMX6UL_CLK_PLL2_PFD0		36
#define IMX6UL_CLK_PLL2_PFD1		37
#define IMX6UL_CLK_PLL2_PFD2		38
#define IMX6UL_CLK_PLL2_PFD3		39
#define IMX6UL_CLK_PLL3_PFD0		40
#define IMX6UL_CLK_PLL3_PFD1		41
#define IMX6UL_CLK_PLL3_PFD2		42
#define IMX6UL_CLK_PLL3_PFD3		43
#define IMX6UL_CLK_ENET_REF		44
#define IMX6UL_CLK_ENET2_REF		45
#define IMX6UL_CLK_ENET2_REF_125M	46
#define IMX6UL_CLK_ENET_PTP_REF		47
#define IMX6UL_CLK_ENET_PTP		48
#define IMX6UL_CLK_PLL4_POST_DIV	49
#define IMX6UL_CLK_PLL4_AUDIO_DIV	50
#define IMX6UL_CLK_PLL5_POST_DIV	51
#define IMX6UL_CLK_PLL5_VIDEO_DIV	52
#define IMX6UL_CLK_PLL2_198M		53
#define IMX6UL_CLK_PLL3_80M		54
#define IMX6UL_CLK_PLL3_60M		55
#define IMX6UL_CLK_STEP			56
#define IMX6UL_CLK_PLL1_SW		57
#define IMX6UL_CLK_AXI_ALT_SEL		58
#define IMX6UL_CLK_AXI_SEL		59
#define IMX6UL_CLK_PERIPH_PRE		60
#define IMX6UL_CLK_PERIPH2_PRE		61
#define IMX6UL_CLK_PERIPH_CLK2_SEL	62
#define IMX6UL_CLK_PERIPH2_CLK2_SEL	63
#define IMX6UL_CLK_USDHC1_SEL		64
#define IMX6UL_CLK_USDHC2_SEL		65
#define IMX6UL_CLK_BCH_SEL		66
#define IMX6UL_CLK_GPMI_SEL		67
#define IMX6UL_CLK_EIM_SLOW_SEL		68
#define IMX6UL_CLK_SPDIF_SEL		69
#define IMX6UL_CLK_SAI1_SEL		70
#define IMX6UL_CLK_SAI2_SEL		71
#define IMX6UL_CLK_SAI3_SEL		72
#define IMX6UL_CLK_LCDIF_PRE_SEL	73
#define IMX6UL_CLK_SIM_PRE_SEL		74
#define IMX6UL_CLK_LDB_DI0_SEL		75
#define IMX6UL_CLK_LDB_DI1_SEL		76
#define IMX6UL_CLK_ENFC_SEL		77
#define IMX6UL_CLK_CAN_SEL		78
#define IMX6UL_CLK_ECSPI_SEL		79
#define IMX6UL_CLK_UART_SEL		80
#define IMX6UL_CLK_QSPI1_SEL		81
#define IMX6UL_CLK_PERCLK_SEL		82
#define IMX6UL_CLK_LCDIF_SEL		83
#define IMX6UL_CLK_SIM_SEL		84
#define IMX6UL_CLK_PERIPH		85
#define IMX6UL_CLK_PERIPH2		86
#define IMX6UL_CLK_LDB_DI0_DIV_3_5	87
#define IMX6UL_CLK_LDB_DI0_DIV_7	88
#define IMX6UL_CLK_LDB_DI1_DIV_3_5	89
#define IMX6UL_CLK_LDB_DI1_DIV_7	90
#define IMX6UL_CLK_LDB_DI0_DIV_SEL	91
#define IMX6UL_CLK_LDB_DI1_DIV_SEL	92
#define IMX6UL_CLK_ARM			93
#define IMX6UL_CLK_PERIPH_CLK2		94
#define IMX6UL_CLK_PERIPH2_CLK2		95
#define IMX6UL_CLK_AHB			96
#define IMX6UL_CLK_MMDC_PODF		97
#define IMX6UL_CLK_AXI_PODF		98
#define IMX6UL_CLK_PERCLK		99
#define IMX6UL_CLK_IPG			100
#define IMX6UL_CLK_USDHC1_PODF		101
#define IMX6UL_CLK_USDHC2_PODF		102
#define IMX6UL_CLK_BCH_PODF		103
#define IMX6UL_CLK_GPMI_PODF		104
#define IMX6UL_CLK_EIM_SLOW_PODF	105
#define IMX6UL_CLK_SPDIF_PRED		106
#define IMX6UL_CLK_SPDIF_PODF		107
#define IMX6UL_CLK_SAI1_PRED		108
#define IMX6UL_CLK_SAI1_PODF		109
#define IMX6UL_CLK_SAI2_PRED		110
#define IMX6UL_CLK_SAI2_PODF		111
#define IMX6UL_CLK_SAI3_PRED		112
#define IMX6UL_CLK_SAI3_PODF		113
#define IMX6UL_CLK_LCDIF_PRED		114
#define IMX6UL_CLK_LCDIF_PODF		115
#define IMX6UL_CLK_SIM_PODF		116
#define IMX6UL_CLK_QSPI1_PDOF		117
#define IMX6UL_CLK_ENFC_PRED		118
#define IMX6UL_CLK_ENFC_PODF		119
#define IMX6UL_CLK_CAN_PODF		120
#define IMX6UL_CLK_ECSPI_PODF		121
#define IMX6UL_CLK_UART_PODF		122
#define IMX6UL_CLK_ADC1			123
#define IMX6UL_CLK_ADC2			124
#define IMX6UL_CLK_AIPSTZ1		125
#define IMX6UL_CLK_AIPSTZ2		126
#define IMX6UL_CLK_AIPSTZ3		127
#define IMX6UL_CLK_APBHDMA		128
#define IMX6UL_CLK_ASRC_IPG		129
#define IMX6UL_CLK_ASRC_MEM		130
#define IMX6UL_CLK_GPMI_BCH_APB		131
#define IMX6UL_CLK_GPMI_BCH		132
#define IMX6UL_CLK_GPMI_IO		133
#define IMX6UL_CLK_GPMI_APB		134
#define IMX6UL_CLK_CAAM_MEM		135
#define IMX6UL_CLK_CAAM_ACLK		136
#define IMX6UL_CLK_CAAM_IPG		137
#define IMX6UL_CLK_CSI			138
#define IMX6UL_CLK_ECSPI1		139
#define IMX6UL_CLK_ECSPI2		140
#define IMX6UL_CLK_ECSPI3		141
#define IMX6UL_CLK_ECSPI4		142
#define IMX6UL_CLK_EIM			143
#define IMX6UL_CLK_ENET			144
#define IMX6UL_CLK_ENET_AHB		145
#define IMX6UL_CLK_EPIT1		146
#define IMX6UL_CLK_EPIT2		147
#define IMX6UL_CLK_CAN1_IPG		148
#define IMX6UL_CLK_CAN1_SERIAL		149
#define IMX6UL_CLK_CAN2_IPG		150
#define IMX6UL_CLK_CAN2_SERIAL		151
#define IMX6UL_CLK_GPT1_BUS		152
#define IMX6UL_CLK_GPT1_SERIAL		153
#define IMX6UL_CLK_GPT2_BUS		154
#define IMX6UL_CLK_GPT2_SERIAL		155
#define IMX6UL_CLK_I2C1			156
#define IMX6UL_CLK_I2C2			157
#define IMX6UL_CLK_I2C3			158
#define IMX6UL_CLK_I2C4			159
#define IMX6UL_CLK_IOMUXC		160
#define IMX6UL_CLK_LCDIF_APB		161
#define IMX6UL_CLK_LCDIF_PIX		162
#define IMX6UL_CLK_MMDC_P0_FAST		163
#define IMX6UL_CLK_MMDC_P0_IPG		164
#define IMX6UL_CLK_OCOTP		165
#define IMX6UL_CLK_OCRAM		166
#define IMX6UL_CLK_PWM1			167
#define IMX6UL_CLK_PWM2			168
#define IMX6UL_CLK_PWM3			169
#define IMX6UL_CLK_PWM4			170
#define IMX6UL_CLK_PWM5			171
#define IMX6UL_CLK_PWM6			172
#define IMX6UL_CLK_PWM7			173
#define IMX6UL_CLK_PWM8			174
#define IMX6UL_CLK_PXP			175
#define IMX6UL_CLK_QSPI			176
#define IMX6UL_CLK_ROM			177
#define IMX6UL_CLK_SAI1			178
#define IMX6UL_CLK_SAI1_IPG		179
#define IMX6UL_CLK_SAI2			180
#define IMX6UL_CLK_SAI2_IPG		181
#define IMX6UL_CLK_SAI3			182
#define IMX6UL_CLK_SAI3_IPG		183
#define IMX6UL_CLK_SDMA			184
#define IMX6UL_CLK_SIM			185
#define IMX6UL_CLK_SIM_S		186
#define IMX6UL_CLK_SPBA			187
#define IMX6UL_CLK_SPDIF		188
#define IMX6UL_CLK_UART1_IPG		189
#define IMX6UL_CLK_UART1_SERIAL		190
#define IMX6UL_CLK_UART2_IPG		191
#define IMX6UL_CLK_UART2_SERIAL		192
#define IMX6UL_CLK_UART3_IPG		193
#define IMX6UL_CLK_UART3_SERIAL		194
#define IMX6UL_CLK_UART4_IPG		195
#define IMX6UL_CLK_UART4_SERIAL		196
#define IMX6UL_CLK_UART5_IPG		197
#define IMX6UL_CLK_UART5_SERIAL		198
#define IMX6UL_CLK_UART6_IPG		199
#define IMX6UL_CLK_UART6_SERIAL		200
#define IMX6UL_CLK_UART7_IPG		201
#define IMX6UL_CLK_UART7_SERIAL		202
#define IMX6UL_CLK_UART8_IPG		203
#define IMX6UL_CLK_UART8_SERIAL		204
#define IMX6UL_CLK_USBOH3		205
#define IMX6UL_CLK_USDHC1		206
#define IMX6UL_CLK_USDHC2		207
#define IMX6UL_CLK_WDOG1		208
#define IMX6UL_CLK_WDOG2		209
#define IMX6UL_CLK_WDOG3		210
#define IMX6UL_CLK_LDB_DI0		211
#define IMX6UL_CLK_AXI			212
#define IMX6UL_CLK_SPDIF_GCLK		213
#define IMX6UL_CLK_GPT_3M		214
#define IMX6UL_CLK_SIM2			215
#define IMX6UL_CLK_SIM1			216
#define IMX6UL_CLK_IPP_DI0		217
#define IMX6UL_CLK_IPP_DI1		218
#define IMX6UL_CA7_SECONDARY_SEL	219
#define IMX6UL_CLK_PER_BCH		220
#define IMX6UL_CLK_CSI_SEL		221
#define IMX6UL_CLK_CSI_PODF		222
#define IMX6UL_CLK_PLL3_120M		223
#define IMX6UL_CLK_KPP			224
#define IMX6ULL_CLK_ESAI_PRED		225
#define IMX6ULL_CLK_ESAI_PODF		226
#define IMX6ULL_CLK_ESAI_EXTAL		227
#define IMX6ULL_CLK_ESAI_MEM		228
#define IMX6ULL_CLK_ESAI_IPG		229
#define IMX6ULL_CLK_DCP_CLK		230
#define IMX6ULL_CLK_EPDC_PRE_SEL	231
#define IMX6ULL_CLK_EPDC_SEL		232
#define IMX6ULL_CLK_EPDC_PODF		233
#define IMX6ULL_CLK_EPDC_ACLK		234
#define IMX6ULL_CLK_EPDC_PIX		235
#define IMX6ULL_CLK_ESAI_SEL		236
#define IMX6UL_CLK_CKO1_SEL		237
#define IMX6UL_CLK_CKO1_PODF		238
#define IMX6UL_CLK_CKO1			239
#define IMX6UL_CLK_CKO2_SEL		240
#define IMX6UL_CLK_CKO2_PODF		241
#define IMX6UL_CLK_CKO2			242
#define IMX6UL_CLK_CKO			243
#define IMX6UL_CLK_GPIO1		244
#define IMX6UL_CLK_GPIO2		245
#define IMX6UL_CLK_GPIO3		246
#define IMX6UL_CLK_GPIO4		247
#define IMX6UL_CLK_GPIO5		248
#define IMX6UL_CLK_MMDC_P1_IPG		249
#define IMX6UL_CLK_ENET1_REF_125M	250

#define IMX6UL_CLK_END			251

#endif /* __DT_BINDINGS_CLOCK_IMX6UL_H */
