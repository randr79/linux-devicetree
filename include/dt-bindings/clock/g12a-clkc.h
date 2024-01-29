/* SPDX-License-Identifier: GPL-2.0+ OR MIT */
/*
 * Meson-G12A clock tree IDs
 *
 * Copyright (c) 2018 Amlogic, Inc. All rights reserved.
 */

#ifndef __G12A_CLKC_H
#define __G12A_CLKC_H

#define CLKID_SYS_PLL				0
#define CLKID_FIXED_PLL				1
#define CLKID_FCLK_DIV2				2
#define CLKID_FCLK_DIV3				3
#define CLKID_FCLK_DIV4				4
#define CLKID_FCLK_DIV5				5
#define CLKID_FCLK_DIV7				6
#define CLKID_GP0_PLL				7
#define CLKID_MPEG_SEL				8
#define CLKID_MPEG_DIV				9
#define CLKID_CLK81				10
#define CLKID_MPLL0				11
#define CLKID_MPLL1				12
#define CLKID_MPLL2				13
#define CLKID_MPLL3				14
#define CLKID_DDR				15
#define CLKID_DOS				16
#define CLKID_AUDIO_LOCKER			17
#define CLKID_MIPI_DSI_HOST			18
#define CLKID_ETH_PHY				19
#define CLKID_ISA				20
#define CLKID_PL301				21
#define CLKID_PERIPHS				22
#define CLKID_SPICC0				23
#define CLKID_I2C				24
#define CLKID_SANA				25
#define CLKID_SD				26
#define CLKID_RNG0				27
#define CLKID_UART0				28
#define CLKID_SPICC1				29
#define CLKID_HIU_IFACE				30
#define CLKID_MIPI_DSI_PHY			31
#define CLKID_ASSIST_MISC			32
#define CLKID_SD_EMMC_A				33
#define CLKID_SD_EMMC_B				34
#define CLKID_SD_EMMC_C				35
#define CLKID_AUDIO_CODEC			36
#define CLKID_AUDIO				37
#define CLKID_ETH				38
#define CLKID_DEMUX				39
#define CLKID_AUDIO_IFIFO			40
#define CLKID_ADC				41
#define CLKID_UART1				42
#define CLKID_G2D				43
#define CLKID_RESET				44
#define CLKID_PCIE_COMB				45
#define CLKID_PARSER				46
#define CLKID_USB				47
#define CLKID_PCIE_PHY				48
#define CLKID_AHB_ARB0				49
#define CLKID_AHB_DATA_BUS			50
#define CLKID_AHB_CTRL_BUS			51
#define CLKID_HTX_HDCP22			52
#define CLKID_HTX_PCLK				53
#define CLKID_BT656				54
#define CLKID_USB1_DDR_BRIDGE			55
#define CLKID_MMC_PCLK				56
#define CLKID_UART2				57
#define CLKID_VPU_INTR				58
#define CLKID_GIC				59
#define CLKID_SD_EMMC_A_CLK0			60
#define CLKID_SD_EMMC_B_CLK0			61
#define CLKID_SD_EMMC_C_CLK0			62
#define CLKID_SD_EMMC_A_CLK0_SEL		63
#define CLKID_SD_EMMC_A_CLK0_DIV		64
#define CLKID_SD_EMMC_B_CLK0_SEL		65
#define CLKID_SD_EMMC_B_CLK0_DIV		66
#define CLKID_SD_EMMC_C_CLK0_SEL		67
#define CLKID_SD_EMMC_C_CLK0_DIV		68
#define CLKID_MPLL0_DIV				69
#define CLKID_MPLL1_DIV				70
#define CLKID_MPLL2_DIV				71
#define CLKID_MPLL3_DIV				72
#define CLKID_MPLL_PREDIV			73
#define CLKID_HIFI_PLL				74
#define CLKID_FCLK_DIV2_DIV			75
#define CLKID_FCLK_DIV3_DIV			76
#define CLKID_FCLK_DIV4_DIV			77
#define CLKID_FCLK_DIV5_DIV			78
#define CLKID_FCLK_DIV7_DIV			79
#define CLKID_VCLK2_VENCI0			80
#define CLKID_VCLK2_VENCI1			81
#define CLKID_VCLK2_VENCP0			82
#define CLKID_VCLK2_VENCP1			83
#define CLKID_VCLK2_VENCT0			84
#define CLKID_VCLK2_VENCT1			85
#define CLKID_VCLK2_OTHER			86
#define CLKID_VCLK2_ENCI			87
#define CLKID_VCLK2_ENCP			88
#define CLKID_DAC_CLK				89
#define CLKID_AOCLK				90
#define CLKID_IEC958				91
#define CLKID_ENC480P				92
#define CLKID_RNG1				93
#define CLKID_VCLK2_ENCT			94
#define CLKID_VCLK2_ENCL			95
#define CLKID_VCLK2_VENCLMMC			96
#define CLKID_VCLK2_VENCL			97
#define CLKID_VCLK2_OTHER1			98
#define CLKID_FCLK_DIV2P5			99
#define CLKID_FCLK_DIV2P5_DIV			100
#define CLKID_FIXED_PLL_DCO			101
#define CLKID_SYS_PLL_DCO			102
#define CLKID_GP0_PLL_DCO			103
#define CLKID_HIFI_PLL_DCO			104
#define CLKID_DMA				105
#define CLKID_EFUSE				106
#define CLKID_ROM_BOOT				107
#define CLKID_RESET_SEC				108
#define CLKID_SEC_AHB_APB3			109
#define CLKID_VPU_0_SEL				110
#define CLKID_VPU_0_DIV				111
#define CLKID_VPU_0				112
#define CLKID_VPU_1_SEL				113
#define CLKID_VPU_1_DIV				114
#define CLKID_VPU_1				115
#define CLKID_VPU				116
#define CLKID_VAPB_0_SEL			117
#define CLKID_VAPB_0_DIV			118
#define CLKID_VAPB_0				119
#define CLKID_VAPB_1_SEL			120
#define CLKID_VAPB_1_DIV			121
#define CLKID_VAPB_1				122
#define CLKID_VAPB_SEL				123
#define CLKID_VAPB				124
#define CLKID_HDMI_PLL_DCO			125
#define CLKID_HDMI_PLL_OD			126
#define CLKID_HDMI_PLL_OD2			127
#define CLKID_HDMI_PLL				128
#define CLKID_VID_PLL				129
#define CLKID_VID_PLL_SEL			130
#define CLKID_VID_PLL_DIV			131
#define CLKID_VCLK_SEL				132
#define CLKID_VCLK2_SEL				133
#define CLKID_VCLK_INPUT			134
#define CLKID_VCLK2_INPUT			135
#define CLKID_VCLK_DIV				136
#define CLKID_VCLK2_DIV				137
#define CLKID_VCLK				138
#define CLKID_VCLK2				139
#define CLKID_VCLK_DIV2_EN			140
#define CLKID_VCLK_DIV4_EN			141
#define CLKID_VCLK_DIV6_EN			142
#define CLKID_VCLK_DIV12_EN			143
#define CLKID_VCLK2_DIV2_EN			144
#define CLKID_VCLK2_DIV4_EN			145
#define CLKID_VCLK2_DIV6_EN			146
#define CLKID_VCLK2_DIV12_EN			147
#define CLKID_VCLK_DIV1				148
#define CLKID_VCLK_DIV2				149
#define CLKID_VCLK_DIV4				150
#define CLKID_VCLK_DIV6				151
#define CLKID_VCLK_DIV12			152
#define CLKID_VCLK2_DIV1			153
#define CLKID_VCLK2_DIV2			154
#define CLKID_VCLK2_DIV4			155
#define CLKID_VCLK2_DIV6			156
#define CLKID_VCLK2_DIV12			157
#define CLKID_CTS_ENCI_SEL			158
#define CLKID_CTS_ENCP_SEL			159
#define CLKID_CTS_VDAC_SEL			160
#define CLKID_HDMI_TX_SEL			161
#define CLKID_CTS_ENCI				162
#define CLKID_CTS_ENCP				163
#define CLKID_CTS_VDAC				164
#define CLKID_HDMI_TX				165
#define CLKID_HDMI_SEL				166
#define CLKID_HDMI_DIV				167
#define CLKID_HDMI				168
#define CLKID_MALI_0_SEL			169
#define CLKID_MALI_0_DIV			170
#define CLKID_MALI_0				171
#define CLKID_MALI_1_SEL			172
#define CLKID_MALI_1_DIV			173
#define CLKID_MALI_1				174
#define CLKID_MALI				175
#define CLKID_MPLL_50M_DIV			176
#define CLKID_MPLL_50M				177
#define CLKID_SYS_PLL_DIV16_EN			178
#define CLKID_SYS_PLL_DIV16			179
#define CLKID_CPU_CLK_DYN0_SEL			180
#define CLKID_CPU_CLK_DYN0_DIV			181
#define CLKID_CPU_CLK_DYN0			182
#define CLKID_CPU_CLK_DYN1_SEL			183
#define CLKID_CPU_CLK_DYN1_DIV			184
#define CLKID_CPU_CLK_DYN1			185
#define CLKID_CPU_CLK_DYN			186
#define CLKID_CPU_CLK				187
#define CLKID_CPU_CLK_DIV16_EN			188
#define CLKID_CPU_CLK_DIV16			189
#define CLKID_CPU_CLK_APB_DIV			190
#define CLKID_CPU_CLK_APB			191
#define CLKID_CPU_CLK_ATB_DIV			192
#define CLKID_CPU_CLK_ATB			193
#define CLKID_CPU_CLK_AXI_DIV			194
#define CLKID_CPU_CLK_AXI			195
#define CLKID_CPU_CLK_TRACE_DIV			196
#define CLKID_CPU_CLK_TRACE			197
#define CLKID_PCIE_PLL_DCO			198
#define CLKID_PCIE_PLL_DCO_DIV2			199
#define CLKID_PCIE_PLL_OD			200
#define CLKID_PCIE_PLL				201
#define CLKID_VDEC_1_SEL			202
#define CLKID_VDEC_1_DIV			203
#define CLKID_VDEC_1				204
#define CLKID_VDEC_HEVC_SEL			205
#define CLKID_VDEC_HEVC_DIV			206
#define CLKID_VDEC_HEVC				207
#define CLKID_VDEC_HEVCF_SEL			208
#define CLKID_VDEC_HEVCF_DIV			209
#define CLKID_VDEC_HEVCF			210
#define CLKID_TS_DIV				211
#define CLKID_TS				212
#define CLKID_SYS1_PLL_DCO			213
#define CLKID_SYS1_PLL				214
#define CLKID_SYS1_PLL_DIV16_EN			215
#define CLKID_SYS1_PLL_DIV16			216
#define CLKID_CPUB_CLK_DYN0_SEL			217
#define CLKID_CPUB_CLK_DYN0_DIV			218
#define CLKID_CPUB_CLK_DYN0			219
#define CLKID_CPUB_CLK_DYN1_SEL			220
#define CLKID_CPUB_CLK_DYN1_DIV			221
#define CLKID_CPUB_CLK_DYN1			222
#define CLKID_CPUB_CLK_DYN			223
#define CLKID_CPUB_CLK				224
#define CLKID_CPUB_CLK_DIV16_EN			225
#define CLKID_CPUB_CLK_DIV16			226
#define CLKID_CPUB_CLK_DIV2			227
#define CLKID_CPUB_CLK_DIV3			228
#define CLKID_CPUB_CLK_DIV4			229
#define CLKID_CPUB_CLK_DIV5			230
#define CLKID_CPUB_CLK_DIV6			231
#define CLKID_CPUB_CLK_DIV7			232
#define CLKID_CPUB_CLK_DIV8			233
#define CLKID_CPUB_CLK_APB_SEL			234
#define CLKID_CPUB_CLK_APB			235
#define CLKID_CPUB_CLK_ATB_SEL			236
#define CLKID_CPUB_CLK_ATB			237
#define CLKID_CPUB_CLK_AXI_SEL			238
#define CLKID_CPUB_CLK_AXI			239
#define CLKID_CPUB_CLK_TRACE_SEL		240
#define CLKID_CPUB_CLK_TRACE			241
#define CLKID_GP1_PLL_DCO			242
#define CLKID_GP1_PLL				243
#define CLKID_DSU_CLK_DYN0_SEL			244
#define CLKID_DSU_CLK_DYN0_DIV			245
#define CLKID_DSU_CLK_DYN0			246
#define CLKID_DSU_CLK_DYN1_SEL			247
#define CLKID_DSU_CLK_DYN1_DIV			248
#define CLKID_DSU_CLK_DYN1			249
#define CLKID_DSU_CLK_DYN			250
#define CLKID_DSU_CLK_FINAL			251
#define CLKID_DSU_CLK				252
#define CLKID_CPU1_CLK				253
#define CLKID_CPU2_CLK				254
#define CLKID_CPU3_CLK				255
#define CLKID_SPICC0_SCLK_SEL			256
#define CLKID_SPICC0_SCLK_DIV			257
#define CLKID_SPICC0_SCLK			258
#define CLKID_SPICC1_SCLK_SEL			259
#define CLKID_SPICC1_SCLK_DIV			260
#define CLKID_SPICC1_SCLK			261
#define CLKID_NNA_AXI_CLK_SEL			262
#define CLKID_NNA_AXI_CLK_DIV			263
#define CLKID_NNA_AXI_CLK			264
#define CLKID_NNA_CORE_CLK_SEL			265
#define CLKID_NNA_CORE_CLK_DIV			266
#define CLKID_NNA_CORE_CLK			267
#define CLKID_MIPI_DSI_PXCLK_DIV		268
#define CLKID_MIPI_DSI_PXCLK_SEL		269
#define CLKID_MIPI_DSI_PXCLK			270
#define CLKID_CTS_ENCL				271
#define CLKID_CTS_ENCL_SEL			272
#define CLKID_MIPI_ISP_DIV			273
#define CLKID_MIPI_ISP_SEL			274
#define CLKID_MIPI_ISP				275
#define CLKID_MIPI_ISP_GATE			276
#define CLKID_MIPI_ISP_CSI_PHY0			277
#define CLKID_MIPI_ISP_CSI_PHY1			278

#endif /* __G12A_CLKC_H */
