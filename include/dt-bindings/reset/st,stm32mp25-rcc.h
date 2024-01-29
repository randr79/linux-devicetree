/* SPDX-License-Identifier: GPL-2.0-only OR BSD-2-Clause */
/*
 * Copyright (C) STMicroelectronics 2023 - All Rights Reserved
 * Author(s): Gabriel Fernandez <gabriel.fernandez@foss.st.com>
 */

#ifndef _DT_BINDINGS_STM32MP25_RESET_H_
#define _DT_BINDINGS_STM32MP25_RESET_H_

#define TIM1_R		0
#define TIM2_R		1
#define TIM3_R		2
#define TIM4_R		3
#define TIM5_R		4
#define TIM6_R		5
#define TIM7_R		6
#define TIM8_R		7
#define TIM10_R		8
#define TIM11_R		9
#define TIM12_R		10
#define TIM13_R		11
#define TIM14_R		12
#define TIM15_R		13
#define TIM16_R		14
#define TIM17_R		15
#define TIM20_R		16
#define LPTIM1_R	17
#define LPTIM2_R	18
#define LPTIM3_R	19
#define LPTIM4_R	20
#define LPTIM5_R	21
#define SPI1_R		22
#define SPI2_R		23
#define SPI3_R		24
#define SPI4_R		25
#define SPI5_R		26
#define SPI6_R		27
#define SPI7_R		28
#define SPI8_R		29
#define SPDIFRX_R	30
#define USART1_R	31
#define USART2_R	32
#define USART3_R	33
#define UART4_R		34
#define UART5_R		35
#define USART6_R	36
#define UART7_R		37
#define UART8_R		38
#define UART9_R		39
#define LPUART1_R	40
#define IS2M_R		41
#define I2C1_R		42
#define I2C2_R		43
#define I2C3_R		44
#define I2C4_R		45
#define I2C5_R		46
#define I2C6_R		47
#define I2C7_R		48
#define I2C8_R		49
#define SAI1_R		50
#define SAI2_R		51
#define SAI3_R		52
#define SAI4_R		53
#define MDF1_R		54
#define MDF2_R		55
#define FDCAN_R		56
#define HDP_R		57
#define ADC12_R		58
#define ADC3_R		59
#define ETH1_R		60
#define ETH2_R		61
#define USB2_R		62
#define USB2PHY1_R	63
#define USB2PHY2_R	64
#define USB3DR_R	65
#define USB3PCIEPHY_R	66
#define USBTC_R		67
#define ETHSW_R		68
#define SDMMC1_R	69
#define SDMMC1DLL_R	70
#define SDMMC2_R	71
#define SDMMC2DLL_R	72
#define SDMMC3_R	73
#define SDMMC3DLL_R	74
#define GPU_R		75
#define LTDC_R		76
#define DSI_R		77
#define LVDS_R		78
#define CSI_R		79
#define DCMIPP_R	80
#define CCI_R		81
#define VDEC_R		82
#define VENC_R		83
#define WWDG1_R		84
#define WWDG2_R		85
#define VREF_R		86
#define DTS_R		87
#define CRC_R		88
#define SERC_R		89
#define OSPIIOM_R	90
#define I3C1_R		91
#define I3C2_R		92
#define I3C3_R		93
#define I3C4_R		94
#define IWDG2_KER_R	95
#define IWDG4_KER_R	96
#define RNG_R		97
#define PKA_R		98
#define SAES_R		99
#define HASH_R		100
#define CRYP1_R		101
#define CRYP2_R		102
#define PCIE_R		103
#define OSPI1_R		104
#define OSPI1DLL_R	105
#define OSPI2_R		106
#define OSPI2DLL_R	107
#define FMC_R		108
#define DBG_R		109
#define GPIOA_R		110
#define GPIOB_R		111
#define GPIOC_R		112
#define GPIOD_R		113
#define GPIOE_R		114
#define GPIOF_R		115
#define GPIOG_R		116
#define GPIOH_R		117
#define GPIOI_R		118
#define GPIOJ_R		119
#define GPIOK_R		120
#define GPIOZ_R		121
#define HPDMA1_R	122
#define HPDMA2_R	123
#define HPDMA3_R	124
#define LPDMA_R		125
#define HSEM_R		126
#define IPCC1_R		127
#define IPCC2_R		128
#define C2_HOLDBOOT_R	129
#define C1_HOLDBOOT_R	130
#define C1_R		131
#define C1P1POR_R	132
#define C1P1_R		133
#define C2_R		134
#define C3_R		135
#define SYS_R		136
#define VSW_R		137
#define C1MS_R		138
#define DDRCP_R		139
#define DDRCAPB_R	140
#define DDRPHYCAPB_R	141
#define DDRCFG_R	142
#define DDR_R		143

#define STM32MP25_LAST_RESET	144

#define RST_SCMI_C1_R		0
#define RST_SCMI_C2_R		1
#define RST_SCMI_C1_HOLDBOOT_R	2
#define RST_SCMI_C2_HOLDBOOT_R	3
#define RST_SCMI_FMC		4
#define RST_SCMI_OSPI1		5
#define RST_SCMI_OSPI1DLL	6
#define RST_SCMI_OSPI2		7
#define RST_SCMI_OSPI2DLL	8

#endif /* _DT_BINDINGS_STM32MP25_RESET_H_ */
