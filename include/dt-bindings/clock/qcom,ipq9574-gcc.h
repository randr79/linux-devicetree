/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2018-2023 The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLOCK_IPQ_GCC_9574_H
#define _DT_BINDINGS_CLOCK_IPQ_GCC_9574_H

#define GPLL0_MAIN					0
#define GPLL0						1
#define GPLL2_MAIN					2
#define GPLL2						3
#define GPLL4_MAIN					4
#define GPLL4						5
#define GCC_SLEEP_CLK_SRC				6
#define APSS_AHB_CLK_SRC				7
#define APSS_AXI_CLK_SRC				8
#define BLSP1_QUP1_I2C_APPS_CLK_SRC			9
#define BLSP1_QUP1_SPI_APPS_CLK_SRC			10
#define BLSP1_QUP2_I2C_APPS_CLK_SRC			11
#define BLSP1_QUP2_SPI_APPS_CLK_SRC			12
#define BLSP1_QUP3_I2C_APPS_CLK_SRC			13
#define BLSP1_QUP3_SPI_APPS_CLK_SRC			14
#define BLSP1_QUP4_I2C_APPS_CLK_SRC			15
#define BLSP1_QUP4_SPI_APPS_CLK_SRC			16
#define BLSP1_QUP5_I2C_APPS_CLK_SRC			17
#define BLSP1_QUP5_SPI_APPS_CLK_SRC			18
#define BLSP1_QUP6_I2C_APPS_CLK_SRC			19
#define BLSP1_QUP6_SPI_APPS_CLK_SRC			20
#define BLSP1_UART1_APPS_CLK_SRC			21
#define BLSP1_UART2_APPS_CLK_SRC			22
#define BLSP1_UART3_APPS_CLK_SRC			23
#define BLSP1_UART4_APPS_CLK_SRC			24
#define BLSP1_UART5_APPS_CLK_SRC			25
#define BLSP1_UART6_APPS_CLK_SRC			26
#define GCC_APSS_AHB_CLK				27
#define GCC_APSS_AXI_CLK				28
#define GCC_BLSP1_QUP1_I2C_APPS_CLK			29
#define GCC_BLSP1_QUP1_SPI_APPS_CLK			30
#define GCC_BLSP1_QUP2_I2C_APPS_CLK			31
#define GCC_BLSP1_QUP2_SPI_APPS_CLK			32
#define GCC_BLSP1_QUP3_I2C_APPS_CLK			33
#define GCC_BLSP1_QUP3_SPI_APPS_CLK			34
#define GCC_BLSP1_QUP4_I2C_APPS_CLK			35
#define GCC_BLSP1_QUP4_SPI_APPS_CLK			36
#define GCC_BLSP1_QUP5_I2C_APPS_CLK			37
#define GCC_BLSP1_QUP5_SPI_APPS_CLK			38
#define GCC_BLSP1_QUP6_I2C_APPS_CLK			39
#define GCC_BLSP1_QUP6_SPI_APPS_CLK			40
#define GCC_BLSP1_UART1_APPS_CLK			41
#define GCC_BLSP1_UART2_APPS_CLK			42
#define GCC_BLSP1_UART3_APPS_CLK			43
#define GCC_BLSP1_UART4_APPS_CLK			44
#define GCC_BLSP1_UART5_APPS_CLK			45
#define GCC_BLSP1_UART6_APPS_CLK			46
#define PCIE0_AXI_M_CLK_SRC				47
#define GCC_PCIE0_AXI_M_CLK				48
#define PCIE1_AXI_M_CLK_SRC				49
#define GCC_PCIE1_AXI_M_CLK				50
#define PCIE2_AXI_M_CLK_SRC				51
#define GCC_PCIE2_AXI_M_CLK				52
#define PCIE3_AXI_M_CLK_SRC				53
#define GCC_PCIE3_AXI_M_CLK				54
#define PCIE0_AXI_S_CLK_SRC				55
#define GCC_PCIE0_AXI_S_BRIDGE_CLK			56
#define GCC_PCIE0_AXI_S_CLK				57
#define PCIE1_AXI_S_CLK_SRC				58
#define GCC_PCIE1_AXI_S_BRIDGE_CLK			59
#define GCC_PCIE1_AXI_S_CLK				60
#define PCIE2_AXI_S_CLK_SRC				61
#define GCC_PCIE2_AXI_S_BRIDGE_CLK			62
#define GCC_PCIE2_AXI_S_CLK				63
#define PCIE3_AXI_S_CLK_SRC				64
#define GCC_PCIE3_AXI_S_BRIDGE_CLK			65
#define GCC_PCIE3_AXI_S_CLK				66
#define PCIE0_PIPE_CLK_SRC				67
#define PCIE1_PIPE_CLK_SRC				68
#define PCIE2_PIPE_CLK_SRC				69
#define PCIE3_PIPE_CLK_SRC				70
#define PCIE_AUX_CLK_SRC				71
#define GCC_PCIE0_AUX_CLK				72
#define GCC_PCIE1_AUX_CLK				73
#define GCC_PCIE2_AUX_CLK				74
#define GCC_PCIE3_AUX_CLK				75
#define PCIE0_RCHNG_CLK_SRC				76
#define GCC_PCIE0_RCHNG_CLK				77
#define PCIE1_RCHNG_CLK_SRC				78
#define GCC_PCIE1_RCHNG_CLK				79
#define PCIE2_RCHNG_CLK_SRC				80
#define GCC_PCIE2_RCHNG_CLK				81
#define PCIE3_RCHNG_CLK_SRC				82
#define GCC_PCIE3_RCHNG_CLK				83
#define GCC_PCIE0_AHB_CLK				84
#define GCC_PCIE1_AHB_CLK				85
#define GCC_PCIE2_AHB_CLK				86
#define GCC_PCIE3_AHB_CLK				87
#define USB0_AUX_CLK_SRC				88
#define GCC_USB0_AUX_CLK				89
#define USB0_MASTER_CLK_SRC				90
#define GCC_USB0_MASTER_CLK				91
#define GCC_SNOC_USB_CLK				92
#define GCC_ANOC_USB_AXI_CLK				93
#define USB0_MOCK_UTMI_CLK_SRC				94
#define USB0_MOCK_UTMI_DIV_CLK_SRC			95
#define GCC_USB0_MOCK_UTMI_CLK				96
#define USB0_PIPE_CLK_SRC				97
#define GCC_USB0_PHY_CFG_AHB_CLK			98
#define SDCC1_APPS_CLK_SRC				99
#define GCC_SDCC1_APPS_CLK				100
#define SDCC1_ICE_CORE_CLK_SRC				101
#define GCC_SDCC1_ICE_CORE_CLK				102
#define GCC_SDCC1_AHB_CLK				103
#define PCNOC_BFDCD_CLK_SRC				104
#define GCC_NSSCFG_CLK					105
#define GCC_NSSNOC_NSSCC_CLK				106
#define GCC_NSSCC_CLK					107
#define GCC_NSSNOC_PCNOC_1_CLK				108
#define GCC_QDSS_DAP_AHB_CLK				109
#define GCC_QDSS_CFG_AHB_CLK				110
#define GCC_QPIC_AHB_CLK				111
#define GCC_QPIC_CLK					112
#define GCC_BLSP1_AHB_CLK				113
#define GCC_MDIO_AHB_CLK				114
#define GCC_PRNG_AHB_CLK				115
#define GCC_UNIPHY0_AHB_CLK				116
#define GCC_UNIPHY1_AHB_CLK				117
#define GCC_UNIPHY2_AHB_CLK				118
#define GCC_CMN_12GPLL_AHB_CLK				119
#define GCC_CMN_12GPLL_APU_CLK				120
#define SYSTEM_NOC_BFDCD_CLK_SRC			121
#define GCC_NSSNOC_SNOC_CLK				122
#define GCC_NSSNOC_SNOC_1_CLK				123
#define GCC_QDSS_ETR_USB_CLK				124
#define WCSS_AHB_CLK_SRC				125
#define GCC_Q6_AHB_CLK					126
#define GCC_Q6_AHB_S_CLK				127
#define GCC_WCSS_ECAHB_CLK				128
#define GCC_WCSS_ACMT_CLK				129
#define GCC_SYS_NOC_WCSS_AHB_CLK			130
#define WCSS_AXI_M_CLK_SRC				131
#define GCC_ANOC_WCSS_AXI_M_CLK				132
#define QDSS_AT_CLK_SRC					133
#define GCC_Q6SS_ATBM_CLK				134
#define GCC_WCSS_DBG_IFC_ATB_CLK			135
#define GCC_NSSNOC_ATB_CLK				136
#define GCC_QDSS_AT_CLK					137
#define GCC_SYS_NOC_AT_CLK				138
#define GCC_PCNOC_AT_CLK				139
#define GCC_USB0_EUD_AT_CLK				140
#define GCC_QDSS_EUD_AT_CLK				141
#define QDSS_STM_CLK_SRC				142
#define GCC_QDSS_STM_CLK				143
#define GCC_SYS_NOC_QDSS_STM_AXI_CLK			144
#define QDSS_TRACECLKIN_CLK_SRC				145
#define GCC_QDSS_TRACECLKIN_CLK				146
#define QDSS_TSCTR_CLK_SRC				147
#define GCC_Q6_TSCTR_1TO2_CLK				148
#define GCC_WCSS_DBG_IFC_NTS_CLK			149
#define GCC_QDSS_TSCTR_DIV2_CLK				150
#define GCC_QDSS_TS_CLK					151
#define GCC_QDSS_TSCTR_DIV4_CLK				152
#define GCC_NSS_TS_CLK					153
#define GCC_QDSS_TSCTR_DIV8_CLK				154
#define GCC_QDSS_TSCTR_DIV16_CLK			155
#define GCC_Q6SS_PCLKDBG_CLK				156
#define GCC_Q6SS_TRIG_CLK				157
#define GCC_WCSS_DBG_IFC_APB_CLK			158
#define GCC_WCSS_DBG_IFC_DAPBUS_CLK			159
#define GCC_QDSS_DAP_CLK				160
#define GCC_QDSS_APB2JTAG_CLK				161
#define GCC_QDSS_TSCTR_DIV3_CLK				162
#define QPIC_IO_MACRO_CLK_SRC				163
#define GCC_QPIC_IO_MACRO_CLK                           164
#define Q6_AXI_CLK_SRC					165
#define GCC_Q6_AXIM_CLK					166
#define GCC_WCSS_Q6_TBU_CLK				167
#define GCC_MEM_NOC_Q6_AXI_CLK				168
#define Q6_AXIM2_CLK_SRC				169
#define NSSNOC_MEMNOC_BFDCD_CLK_SRC			170
#define GCC_NSSNOC_MEMNOC_CLK				171
#define GCC_NSSNOC_MEM_NOC_1_CLK			172
#define GCC_NSS_TBU_CLK					173
#define GCC_MEM_NOC_NSSNOC_CLK				174
#define LPASS_AXIM_CLK_SRC				175
#define LPASS_SWAY_CLK_SRC				176
#define ADSS_PWM_CLK_SRC				177
#define GCC_ADSS_PWM_CLK				178
#define GP1_CLK_SRC					179
#define GP2_CLK_SRC					180
#define GP3_CLK_SRC					181
#define DDRSS_SMS_SLOW_CLK_SRC				182
#define GCC_XO_CLK_SRC					183
#define GCC_XO_CLK					184
#define GCC_NSSNOC_QOSGEN_REF_CLK			185
#define GCC_NSSNOC_TIMEOUT_REF_CLK			186
#define GCC_XO_DIV4_CLK					187
#define GCC_UNIPHY0_SYS_CLK				188
#define GCC_UNIPHY1_SYS_CLK				189
#define GCC_UNIPHY2_SYS_CLK				190
#define GCC_CMN_12GPLL_SYS_CLK				191
#define GCC_NSSNOC_XO_DCD_CLK				192
#define GCC_Q6SS_BOOT_CLK				193
#define UNIPHY_SYS_CLK_SRC				194
#define NSS_TS_CLK_SRC					195
#define GCC_ANOC_PCIE0_1LANE_M_CLK			196
#define GCC_ANOC_PCIE1_1LANE_M_CLK			197
#define GCC_ANOC_PCIE2_2LANE_M_CLK			198
#define GCC_ANOC_PCIE3_2LANE_M_CLK			199
#define GCC_SNOC_PCIE0_1LANE_S_CLK			200
#define GCC_SNOC_PCIE1_1LANE_S_CLK			201
#define GCC_SNOC_PCIE2_2LANE_S_CLK			202
#define GCC_SNOC_PCIE3_2LANE_S_CLK			203
#define GCC_CRYPTO_CLK_SRC				204
#define GCC_CRYPTO_CLK					205
#define GCC_CRYPTO_AXI_CLK				206
#define GCC_CRYPTO_AHB_CLK				207
#define GCC_USB0_PIPE_CLK				208
#define GCC_USB0_SLEEP_CLK				209
#endif
