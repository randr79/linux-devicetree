/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016 Freescale Semiconductor, Inc.
 * Copyright 2017-2018 NXP
 */

#ifndef __DT_BINDINGS_RSCRC_IMX_H
#define __DT_BINDINGS_RSCRC_IMX_H

/*
 * These defines are used to indicate a resource. Resources include peripherals
 * and bus masters (but not memory regions). Note items from list should
 * never be changed or removed (only added to at the end of the list).
 */

#define IMX_SC_R_A53			0
#define IMX_SC_R_A53_0			1
#define IMX_SC_R_A53_1			2
#define IMX_SC_R_A53_2			3
#define IMX_SC_R_A53_3			4
#define IMX_SC_R_A72			5
#define IMX_SC_R_A72_0			6
#define IMX_SC_R_A72_1			7
#define IMX_SC_R_A72_2			8
#define IMX_SC_R_A72_3			9
#define IMX_SC_R_CCI			10
#define IMX_SC_R_DB			11
#define IMX_SC_R_DRC_0			12
#define IMX_SC_R_DRC_1			13
#define IMX_SC_R_GIC_SMMU		14
#define IMX_SC_R_IRQSTR_M4_0		15
#define IMX_SC_R_IRQSTR_M4_1		16
#define IMX_SC_R_SMMU			17
#define IMX_SC_R_GIC			18
#define IMX_SC_R_DC_0_BLIT0		19
#define IMX_SC_R_DC_0_BLIT1		20
#define IMX_SC_R_DC_0_BLIT2		21
#define IMX_SC_R_DC_0_BLIT_OUT		22
#define IMX_SC_R_PERF			23
#define IMX_SC_R_DC_0_WARP		25
#define IMX_SC_R_DC_0_VIDEO0		28
#define IMX_SC_R_DC_0_VIDEO1		29
#define IMX_SC_R_DC_0_FRAC0		30
#define IMX_SC_R_DC_0			32
#define IMX_SC_R_GPU_2_PID0		33
#define IMX_SC_R_DC_0_PLL_0		34
#define IMX_SC_R_DC_0_PLL_1		35
#define IMX_SC_R_DC_1_BLIT0		36
#define IMX_SC_R_DC_1_BLIT1		37
#define IMX_SC_R_DC_1_BLIT2		38
#define IMX_SC_R_DC_1_BLIT_OUT		39
#define IMX_SC_R_DC_1_WARP		42
#define IMX_SC_R_DC_1_VIDEO0		45
#define IMX_SC_R_DC_1_VIDEO1		46
#define IMX_SC_R_DC_1_FRAC0		47
#define IMX_SC_R_DC_1			49
#define IMX_SC_R_DC_1_PLL_0		51
#define IMX_SC_R_DC_1_PLL_1		52
#define IMX_SC_R_SPI_0			53
#define IMX_SC_R_SPI_1			54
#define IMX_SC_R_SPI_2			55
#define IMX_SC_R_SPI_3			56
#define IMX_SC_R_UART_0			57
#define IMX_SC_R_UART_1			58
#define IMX_SC_R_UART_2			59
#define IMX_SC_R_UART_3			60
#define IMX_SC_R_UART_4			61
#define IMX_SC_R_EMVSIM_0		62
#define IMX_SC_R_EMVSIM_1		63
#define IMX_SC_R_DMA_0_CH0		64
#define IMX_SC_R_DMA_0_CH1		65
#define IMX_SC_R_DMA_0_CH2		66
#define IMX_SC_R_DMA_0_CH3		67
#define IMX_SC_R_DMA_0_CH4		68
#define IMX_SC_R_DMA_0_CH5		69
#define IMX_SC_R_DMA_0_CH6		70
#define IMX_SC_R_DMA_0_CH7		71
#define IMX_SC_R_DMA_0_CH8		72
#define IMX_SC_R_DMA_0_CH9		73
#define IMX_SC_R_DMA_0_CH10		74
#define IMX_SC_R_DMA_0_CH11		75
#define IMX_SC_R_DMA_0_CH12		76
#define IMX_SC_R_DMA_0_CH13		77
#define IMX_SC_R_DMA_0_CH14		78
#define IMX_SC_R_DMA_0_CH15		79
#define IMX_SC_R_DMA_0_CH16		80
#define IMX_SC_R_DMA_0_CH17		81
#define IMX_SC_R_DMA_0_CH18		82
#define IMX_SC_R_DMA_0_CH19		83
#define IMX_SC_R_DMA_0_CH20		84
#define IMX_SC_R_DMA_0_CH21		85
#define IMX_SC_R_DMA_0_CH22		86
#define IMX_SC_R_DMA_0_CH23		87
#define IMX_SC_R_DMA_0_CH24		88
#define IMX_SC_R_DMA_0_CH25		89
#define IMX_SC_R_DMA_0_CH26		90
#define IMX_SC_R_DMA_0_CH27		91
#define IMX_SC_R_DMA_0_CH28		92
#define IMX_SC_R_DMA_0_CH29		93
#define IMX_SC_R_DMA_0_CH30		94
#define IMX_SC_R_DMA_0_CH31		95
#define IMX_SC_R_I2C_0			96
#define IMX_SC_R_I2C_1			97
#define IMX_SC_R_I2C_2			98
#define IMX_SC_R_I2C_3			99
#define IMX_SC_R_I2C_4			100
#define IMX_SC_R_ADC_0			101
#define IMX_SC_R_ADC_1			102
#define IMX_SC_R_FTM_0			103
#define IMX_SC_R_FTM_1			104
#define IMX_SC_R_CAN_0			105
#define IMX_SC_R_CAN_1			106
#define IMX_SC_R_CAN_2			107
#define IMX_SC_R_DMA_1_CH0		108
#define IMX_SC_R_DMA_1_CH1		109
#define IMX_SC_R_DMA_1_CH2		110
#define IMX_SC_R_DMA_1_CH3		111
#define IMX_SC_R_DMA_1_CH4		112
#define IMX_SC_R_DMA_1_CH5		113
#define IMX_SC_R_DMA_1_CH6		114
#define IMX_SC_R_DMA_1_CH7		115
#define IMX_SC_R_DMA_1_CH8		116
#define IMX_SC_R_DMA_1_CH9		117
#define IMX_SC_R_DMA_1_CH10		118
#define IMX_SC_R_DMA_1_CH11		119
#define IMX_SC_R_DMA_1_CH12		120
#define IMX_SC_R_DMA_1_CH13		121
#define IMX_SC_R_DMA_1_CH14		122
#define IMX_SC_R_DMA_1_CH15		123
#define IMX_SC_R_DMA_1_CH16		124
#define IMX_SC_R_DMA_1_CH17		125
#define IMX_SC_R_DMA_1_CH18		126
#define IMX_SC_R_DMA_1_CH19		127
#define IMX_SC_R_DMA_1_CH20		128
#define IMX_SC_R_DMA_1_CH21		129
#define IMX_SC_R_DMA_1_CH22		130
#define IMX_SC_R_DMA_1_CH23		131
#define IMX_SC_R_DMA_1_CH24		132
#define IMX_SC_R_DMA_1_CH25		133
#define IMX_SC_R_DMA_1_CH26		134
#define IMX_SC_R_DMA_1_CH27		135
#define IMX_SC_R_DMA_1_CH28		136
#define IMX_SC_R_DMA_1_CH29		137
#define IMX_SC_R_DMA_1_CH30		138
#define IMX_SC_R_DMA_1_CH31		139
#define IMX_SC_R_UNUSED1		140
#define IMX_SC_R_UNUSED2		141
#define IMX_SC_R_UNUSED3		142
#define IMX_SC_R_UNUSED4		143
#define IMX_SC_R_GPU_0_PID0		144
#define IMX_SC_R_GPU_0_PID1		145
#define IMX_SC_R_GPU_0_PID2		146
#define IMX_SC_R_GPU_0_PID3		147
#define IMX_SC_R_GPU_1_PID0		148
#define IMX_SC_R_GPU_1_PID1		149
#define IMX_SC_R_GPU_1_PID2		150
#define IMX_SC_R_GPU_1_PID3		151
#define IMX_SC_R_PCIE_A			152
#define IMX_SC_R_SERDES_0		153
#define IMX_SC_R_MATCH_0		154
#define IMX_SC_R_MATCH_1		155
#define IMX_SC_R_MATCH_2		156
#define IMX_SC_R_MATCH_3		157
#define IMX_SC_R_MATCH_4		158
#define IMX_SC_R_MATCH_5		159
#define IMX_SC_R_MATCH_6		160
#define IMX_SC_R_MATCH_7		161
#define IMX_SC_R_MATCH_8		162
#define IMX_SC_R_MATCH_9		163
#define IMX_SC_R_MATCH_10		164
#define IMX_SC_R_MATCH_11		165
#define IMX_SC_R_MATCH_12		166
#define IMX_SC_R_MATCH_13		167
#define IMX_SC_R_MATCH_14		168
#define IMX_SC_R_PCIE_B			169
#define IMX_SC_R_SATA_0			170
#define IMX_SC_R_SERDES_1		171
#define IMX_SC_R_HSIO_GPIO		172
#define IMX_SC_R_MATCH_15		173
#define IMX_SC_R_MATCH_16		174
#define IMX_SC_R_MATCH_17		175
#define IMX_SC_R_MATCH_18		176
#define IMX_SC_R_MATCH_19		177
#define IMX_SC_R_MATCH_20		178
#define IMX_SC_R_MATCH_21		179
#define IMX_SC_R_MATCH_22		180
#define IMX_SC_R_MATCH_23		181
#define IMX_SC_R_MATCH_24		182
#define IMX_SC_R_MATCH_25		183
#define IMX_SC_R_MATCH_26		184
#define IMX_SC_R_MATCH_27		185
#define IMX_SC_R_MATCH_28		186
#define IMX_SC_R_LCD_0			187
#define IMX_SC_R_LCD_0_PWM_0		188
#define IMX_SC_R_LCD_0_I2C_0		189
#define IMX_SC_R_LCD_0_I2C_1		190
#define IMX_SC_R_PWM_0			191
#define IMX_SC_R_PWM_1			192
#define IMX_SC_R_PWM_2			193
#define IMX_SC_R_PWM_3			194
#define IMX_SC_R_PWM_4			195
#define IMX_SC_R_PWM_5			196
#define IMX_SC_R_PWM_6			197
#define IMX_SC_R_PWM_7			198
#define IMX_SC_R_GPIO_0			199
#define IMX_SC_R_GPIO_1			200
#define IMX_SC_R_GPIO_2			201
#define IMX_SC_R_GPIO_3			202
#define IMX_SC_R_GPIO_4			203
#define IMX_SC_R_GPIO_5			204
#define IMX_SC_R_GPIO_6			205
#define IMX_SC_R_GPIO_7			206
#define IMX_SC_R_GPT_0			207
#define IMX_SC_R_GPT_1			208
#define IMX_SC_R_GPT_2			209
#define IMX_SC_R_GPT_3			210
#define IMX_SC_R_GPT_4			211
#define IMX_SC_R_KPP			212
#define IMX_SC_R_MU_0A			213
#define IMX_SC_R_MU_1A			214
#define IMX_SC_R_MU_2A			215
#define IMX_SC_R_MU_3A			216
#define IMX_SC_R_MU_4A			217
#define IMX_SC_R_MU_5A			218
#define IMX_SC_R_MU_6A			219
#define IMX_SC_R_MU_7A			220
#define IMX_SC_R_MU_8A			221
#define IMX_SC_R_MU_9A			222
#define IMX_SC_R_MU_10A			223
#define IMX_SC_R_MU_11A			224
#define IMX_SC_R_MU_12A			225
#define IMX_SC_R_MU_13A			226
#define IMX_SC_R_MU_5B			227
#define IMX_SC_R_MU_6B			228
#define IMX_SC_R_MU_7B			229
#define IMX_SC_R_MU_8B			230
#define IMX_SC_R_MU_9B			231
#define IMX_SC_R_MU_10B			232
#define IMX_SC_R_MU_11B			233
#define IMX_SC_R_MU_12B			234
#define IMX_SC_R_MU_13B			235
#define IMX_SC_R_ROM_0			236
#define IMX_SC_R_FSPI_0			237
#define IMX_SC_R_FSPI_1			238
#define IMX_SC_R_IEE			239
#define IMX_SC_R_IEE_R0			240
#define IMX_SC_R_IEE_R1			241
#define IMX_SC_R_IEE_R2			242
#define IMX_SC_R_IEE_R3			243
#define IMX_SC_R_IEE_R4			244
#define IMX_SC_R_IEE_R5			245
#define IMX_SC_R_IEE_R6			246
#define IMX_SC_R_IEE_R7			247
#define IMX_SC_R_SDHC_0			248
#define IMX_SC_R_SDHC_1			249
#define IMX_SC_R_SDHC_2			250
#define IMX_SC_R_ENET_0			251
#define IMX_SC_R_ENET_1			252
#define IMX_SC_R_MLB_0			253
#define IMX_SC_R_DMA_2_CH0		254
#define IMX_SC_R_DMA_2_CH1		255
#define IMX_SC_R_DMA_2_CH2		256
#define IMX_SC_R_DMA_2_CH3		257
#define IMX_SC_R_DMA_2_CH4		258
#define IMX_SC_R_USB_0			259
#define IMX_SC_R_USB_1			260
#define IMX_SC_R_USB_0_PHY		261
#define IMX_SC_R_USB_2			262
#define IMX_SC_R_USB_2_PHY		263
#define IMX_SC_R_DTCP			264
#define IMX_SC_R_NAND			265
#define IMX_SC_R_LVDS_0			266
#define IMX_SC_R_LVDS_0_PWM_0		267
#define IMX_SC_R_LVDS_0_I2C_0		268
#define IMX_SC_R_LVDS_0_I2C_1		269
#define IMX_SC_R_LVDS_1			270
#define IMX_SC_R_LVDS_1_PWM_0		271
#define IMX_SC_R_LVDS_1_I2C_0		272
#define IMX_SC_R_LVDS_1_I2C_1		273
#define IMX_SC_R_LVDS_2			274
#define IMX_SC_R_LVDS_2_PWM_0		275
#define IMX_SC_R_LVDS_2_I2C_0		276
#define IMX_SC_R_LVDS_2_I2C_1		277
#define IMX_SC_R_M4_0_PID0		278
#define IMX_SC_R_M4_0_PID1		279
#define IMX_SC_R_M4_0_PID2		280
#define IMX_SC_R_M4_0_PID3		281
#define IMX_SC_R_M4_0_PID4		282
#define IMX_SC_R_M4_0_RGPIO		283
#define IMX_SC_R_M4_0_SEMA42		284
#define IMX_SC_R_M4_0_TPM		285
#define IMX_SC_R_M4_0_PIT		286
#define IMX_SC_R_M4_0_UART		287
#define IMX_SC_R_M4_0_I2C		288
#define IMX_SC_R_M4_0_INTMUX		289
#define IMX_SC_R_M4_0_MU_0B		292
#define IMX_SC_R_M4_0_MU_0A0		293
#define IMX_SC_R_M4_0_MU_0A1		294
#define IMX_SC_R_M4_0_MU_0A2		295
#define IMX_SC_R_M4_0_MU_0A3		296
#define IMX_SC_R_M4_0_MU_1A		297
#define IMX_SC_R_M4_1_PID0		298
#define IMX_SC_R_M4_1_PID1		299
#define IMX_SC_R_M4_1_PID2		300
#define IMX_SC_R_M4_1_PID3		301
#define IMX_SC_R_M4_1_PID4		302
#define IMX_SC_R_M4_1_RGPIO		303
#define IMX_SC_R_M4_1_SEMA42		304
#define IMX_SC_R_M4_1_TPM		305
#define IMX_SC_R_M4_1_PIT		306
#define IMX_SC_R_M4_1_UART		307
#define IMX_SC_R_M4_1_I2C		308
#define IMX_SC_R_M4_1_INTMUX		309
#define IMX_SC_R_M4_1_MU_0B		312
#define IMX_SC_R_M4_1_MU_0A0		313
#define IMX_SC_R_M4_1_MU_0A1		314
#define IMX_SC_R_M4_1_MU_0A2		315
#define IMX_SC_R_M4_1_MU_0A3		316
#define IMX_SC_R_M4_1_MU_1A		317
#define IMX_SC_R_SAI_0			318
#define IMX_SC_R_SAI_1			319
#define IMX_SC_R_SAI_2			320
#define IMX_SC_R_IRQSTR_SCU2		321
#define IMX_SC_R_IRQSTR_DSP		322
#define IMX_SC_R_ELCDIF_PLL		323
#define IMX_SC_R_OCRAM			324
#define IMX_SC_R_AUDIO_PLL_0		325
#define IMX_SC_R_PI_0			326
#define IMX_SC_R_PI_0_PWM_0		327
#define IMX_SC_R_PI_0_PWM_1		328
#define IMX_SC_R_PI_0_I2C_0		329
#define IMX_SC_R_PI_0_PLL		330
#define IMX_SC_R_PI_1			331
#define IMX_SC_R_PI_1_PWM_0		332
#define IMX_SC_R_PI_1_PWM_1		333
#define IMX_SC_R_PI_1_I2C_0		334
#define IMX_SC_R_PI_1_PLL		335
#define IMX_SC_R_SC_PID0		336
#define IMX_SC_R_SC_PID1		337
#define IMX_SC_R_SC_PID2		338
#define IMX_SC_R_SC_PID3		339
#define IMX_SC_R_SC_PID4		340
#define IMX_SC_R_SC_SEMA42		341
#define IMX_SC_R_SC_TPM			342
#define IMX_SC_R_SC_PIT			343
#define IMX_SC_R_SC_UART		344
#define IMX_SC_R_SC_I2C			345
#define IMX_SC_R_SC_MU_0B		346
#define IMX_SC_R_SC_MU_0A0		347
#define IMX_SC_R_SC_MU_0A1		348
#define IMX_SC_R_SC_MU_0A2		349
#define IMX_SC_R_SC_MU_0A3		350
#define IMX_SC_R_SC_MU_1A		351
#define IMX_SC_R_SYSCNT_RD		352
#define IMX_SC_R_SYSCNT_CMP		353
#define IMX_SC_R_DEBUG			354
#define IMX_SC_R_SYSTEM			355
#define IMX_SC_R_SNVS			356
#define IMX_SC_R_OTP			357
#define IMX_SC_R_VPU_PID0		358
#define IMX_SC_R_VPU_PID1		359
#define IMX_SC_R_VPU_PID2		360
#define IMX_SC_R_VPU_PID3		361
#define IMX_SC_R_VPU_PID4		362
#define IMX_SC_R_VPU_PID5		363
#define IMX_SC_R_VPU_PID6		364
#define IMX_SC_R_VPU_PID7		365
#define IMX_SC_R_VPU_UART		366
#define IMX_SC_R_VPUCORE		367
#define IMX_SC_R_VPUCORE_0		368
#define IMX_SC_R_VPUCORE_1		369
#define IMX_SC_R_VPUCORE_2		370
#define IMX_SC_R_VPUCORE_3		371
#define IMX_SC_R_DMA_4_CH0		372
#define IMX_SC_R_DMA_4_CH1		373
#define IMX_SC_R_DMA_4_CH2		374
#define IMX_SC_R_DMA_4_CH3		375
#define IMX_SC_R_DMA_4_CH4		376
#define IMX_SC_R_ISI_CH0		377
#define IMX_SC_R_ISI_CH1		378
#define IMX_SC_R_ISI_CH2		379
#define IMX_SC_R_ISI_CH3		380
#define IMX_SC_R_ISI_CH4		381
#define IMX_SC_R_ISI_CH5		382
#define IMX_SC_R_ISI_CH6		383
#define IMX_SC_R_ISI_CH7		384
#define IMX_SC_R_MJPEG_DEC_S0		385
#define IMX_SC_R_MJPEG_DEC_S1		386
#define IMX_SC_R_MJPEG_DEC_S2		387
#define IMX_SC_R_MJPEG_DEC_S3		388
#define IMX_SC_R_MJPEG_ENC_S0		389
#define IMX_SC_R_MJPEG_ENC_S1		390
#define IMX_SC_R_MJPEG_ENC_S2		391
#define IMX_SC_R_MJPEG_ENC_S3		392
#define IMX_SC_R_MIPI_0			393
#define IMX_SC_R_MIPI_0_PWM_0		394
#define IMX_SC_R_MIPI_0_I2C_0		395
#define IMX_SC_R_MIPI_0_I2C_1		396
#define IMX_SC_R_MIPI_1			397
#define IMX_SC_R_MIPI_1_PWM_0		398
#define IMX_SC_R_MIPI_1_I2C_0		399
#define IMX_SC_R_MIPI_1_I2C_1		400
#define IMX_SC_R_CSI_0			401
#define IMX_SC_R_CSI_0_PWM_0		402
#define IMX_SC_R_CSI_0_I2C_0		403
#define IMX_SC_R_CSI_1			404
#define IMX_SC_R_CSI_1_PWM_0		405
#define IMX_SC_R_CSI_1_I2C_0		406
#define IMX_SC_R_HDMI			407
#define IMX_SC_R_HDMI_I2S		408
#define IMX_SC_R_HDMI_I2C_0		409
#define IMX_SC_R_HDMI_PLL_0		410
#define IMX_SC_R_HDMI_RX		411
#define IMX_SC_R_HDMI_RX_BYPASS		412
#define IMX_SC_R_HDMI_RX_I2C_0		413
#define IMX_SC_R_ASRC_0			414
#define IMX_SC_R_ESAI_0			415
#define IMX_SC_R_SPDIF_0		416
#define IMX_SC_R_SPDIF_1		417
#define IMX_SC_R_SAI_3			418
#define IMX_SC_R_SAI_4			419
#define IMX_SC_R_SAI_5			420
#define IMX_SC_R_GPT_5			421
#define IMX_SC_R_GPT_6			422
#define IMX_SC_R_GPT_7			423
#define IMX_SC_R_GPT_8			424
#define IMX_SC_R_GPT_9			425
#define IMX_SC_R_GPT_10			426
#define IMX_SC_R_DMA_2_CH5		427
#define IMX_SC_R_DMA_2_CH6		428
#define IMX_SC_R_DMA_2_CH7		429
#define IMX_SC_R_DMA_2_CH8		430
#define IMX_SC_R_DMA_2_CH9		431
#define IMX_SC_R_DMA_2_CH10		432
#define IMX_SC_R_DMA_2_CH11		433
#define IMX_SC_R_DMA_2_CH12		434
#define IMX_SC_R_DMA_2_CH13		435
#define IMX_SC_R_DMA_2_CH14		436
#define IMX_SC_R_DMA_2_CH15		437
#define IMX_SC_R_DMA_2_CH16		438
#define IMX_SC_R_DMA_2_CH17		439
#define IMX_SC_R_DMA_2_CH18		440
#define IMX_SC_R_DMA_2_CH19		441
#define IMX_SC_R_DMA_2_CH20		442
#define IMX_SC_R_DMA_2_CH21		443
#define IMX_SC_R_DMA_2_CH22		444
#define IMX_SC_R_DMA_2_CH23		445
#define IMX_SC_R_DMA_2_CH24		446
#define IMX_SC_R_DMA_2_CH25		447
#define IMX_SC_R_DMA_2_CH26		448
#define IMX_SC_R_DMA_2_CH27		449
#define IMX_SC_R_DMA_2_CH28		450
#define IMX_SC_R_DMA_2_CH29		451
#define IMX_SC_R_DMA_2_CH30		452
#define IMX_SC_R_DMA_2_CH31		453
#define IMX_SC_R_ASRC_1			454
#define IMX_SC_R_ESAI_1			455
#define IMX_SC_R_SAI_6			456
#define IMX_SC_R_SAI_7			457
#define IMX_SC_R_AMIX			458
#define IMX_SC_R_MQS_0			459
#define IMX_SC_R_DMA_3_CH0		460
#define IMX_SC_R_DMA_3_CH1		461
#define IMX_SC_R_DMA_3_CH2		462
#define IMX_SC_R_DMA_3_CH3		463
#define IMX_SC_R_DMA_3_CH4		464
#define IMX_SC_R_DMA_3_CH5		465
#define IMX_SC_R_DMA_3_CH6		466
#define IMX_SC_R_DMA_3_CH7		467
#define IMX_SC_R_DMA_3_CH8		468
#define IMX_SC_R_DMA_3_CH9		469
#define IMX_SC_R_DMA_3_CH10		470
#define IMX_SC_R_DMA_3_CH11		471
#define IMX_SC_R_DMA_3_CH12		472
#define IMX_SC_R_DMA_3_CH13		473
#define IMX_SC_R_DMA_3_CH14		474
#define IMX_SC_R_DMA_3_CH15		475
#define IMX_SC_R_DMA_3_CH16		476
#define IMX_SC_R_DMA_3_CH17		477
#define IMX_SC_R_DMA_3_CH18		478
#define IMX_SC_R_DMA_3_CH19		479
#define IMX_SC_R_DMA_3_CH20		480
#define IMX_SC_R_DMA_3_CH21		481
#define IMX_SC_R_DMA_3_CH22		482
#define IMX_SC_R_DMA_3_CH23		483
#define IMX_SC_R_DMA_3_CH24		484
#define IMX_SC_R_DMA_3_CH25		485
#define IMX_SC_R_DMA_3_CH26		486
#define IMX_SC_R_DMA_3_CH27		487
#define IMX_SC_R_DMA_3_CH28		488
#define IMX_SC_R_DMA_3_CH29		489
#define IMX_SC_R_DMA_3_CH30		490
#define IMX_SC_R_DMA_3_CH31		491
#define IMX_SC_R_AUDIO_PLL_1		492
#define IMX_SC_R_AUDIO_CLK_0		493
#define IMX_SC_R_AUDIO_CLK_1		494
#define IMX_SC_R_MCLK_OUT_0		495
#define IMX_SC_R_MCLK_OUT_1		496
#define IMX_SC_R_PMIC_0			497
#define IMX_SC_R_PMIC_1			498
#define IMX_SC_R_SECO			499
#define IMX_SC_R_CAAM_JR1		500
#define IMX_SC_R_CAAM_JR2		501
#define IMX_SC_R_CAAM_JR3		502
#define IMX_SC_R_SECO_MU_2		503
#define IMX_SC_R_SECO_MU_3		504
#define IMX_SC_R_SECO_MU_4		505
#define IMX_SC_R_HDMI_RX_PWM_0		506
#define IMX_SC_R_A35			507
#define IMX_SC_R_A35_0			508
#define IMX_SC_R_A35_1			509
#define IMX_SC_R_A35_2			510
#define IMX_SC_R_A35_3			511
#define IMX_SC_R_DSP			512
#define IMX_SC_R_DSP_RAM		513
#define IMX_SC_R_CAAM_JR1_OUT		514
#define IMX_SC_R_CAAM_JR2_OUT		515
#define IMX_SC_R_CAAM_JR3_OUT		516
#define IMX_SC_R_VPU_DEC_0		517
#define IMX_SC_R_VPU_ENC_0		518
#define IMX_SC_R_CAAM_JR0		519
#define IMX_SC_R_CAAM_JR0_OUT		520
#define IMX_SC_R_PMIC_2			521
#define IMX_SC_R_DBLOGIC		522
#define IMX_SC_R_HDMI_PLL_1		523
#define IMX_SC_R_BOARD_R0		524
#define IMX_SC_R_BOARD_R1		525
#define IMX_SC_R_BOARD_R2		526
#define IMX_SC_R_BOARD_R3		527
#define IMX_SC_R_BOARD_R4		528
#define IMX_SC_R_BOARD_R5		529
#define IMX_SC_R_BOARD_R6		530
#define IMX_SC_R_BOARD_R7		531
#define IMX_SC_R_MJPEG_DEC_MP		532
#define IMX_SC_R_MJPEG_ENC_MP		533
#define IMX_SC_R_VPU_TS_0		534
#define IMX_SC_R_VPU_MU_0		535
#define IMX_SC_R_VPU_MU_1		536
#define IMX_SC_R_VPU_MU_2		537
#define IMX_SC_R_VPU_MU_3		538
#define IMX_SC_R_VPU_ENC_1		539
#define IMX_SC_R_VPU			540
#define IMX_SC_R_DMA_5_CH0		541
#define IMX_SC_R_DMA_5_CH1		542
#define IMX_SC_R_DMA_5_CH2		543
#define IMX_SC_R_DMA_5_CH3		544
#define IMX_SC_R_ATTESTATION		545
#define IMX_SC_R_LAST			546

/*
 * Defines for SC CONTROL
 */
#define IMX_SC_C_TEMP				0
#define IMX_SC_C_TEMP_HI			1
#define IMX_SC_C_TEMP_LOW			2
#define IMX_SC_C_PXL_LINK_MST1_ADDR		3
#define IMX_SC_C_PXL_LINK_MST2_ADDR		4
#define IMX_SC_C_PXL_LINK_MST_ENB		5
#define IMX_SC_C_PXL_LINK_MST1_ENB		6
#define IMX_SC_C_PXL_LINK_MST2_ENB		7
#define IMX_SC_C_PXL_LINK_SLV1_ADDR		8
#define IMX_SC_C_PXL_LINK_SLV2_ADDR		9
#define IMX_SC_C_PXL_LINK_MST_VLD		10
#define IMX_SC_C_PXL_LINK_MST1_VLD		11
#define IMX_SC_C_PXL_LINK_MST2_VLD		12
#define IMX_SC_C_SINGLE_MODE			13
#define IMX_SC_C_ID				14
#define IMX_SC_C_PXL_CLK_POLARITY		15
#define IMX_SC_C_LINESTATE			16
#define IMX_SC_C_PCIE_G_RST			17
#define IMX_SC_C_PCIE_BUTTON_RST		18
#define IMX_SC_C_PCIE_PERST			19
#define IMX_SC_C_PHY_RESET			20
#define IMX_SC_C_PXL_LINK_RATE_CORRECTION	21
#define IMX_SC_C_PANIC				22
#define IMX_SC_C_PRIORITY_GROUP			23
#define IMX_SC_C_TXCLK				24
#define IMX_SC_C_CLKDIV				25
#define IMX_SC_C_DISABLE_50			26
#define IMX_SC_C_DISABLE_125			27
#define IMX_SC_C_SEL_125			28
#define IMX_SC_C_MODE				29
#define IMX_SC_C_SYNC_CTRL0			30
#define IMX_SC_C_KACHUNK_CNT			31
#define IMX_SC_C_KACHUNK_SEL			32
#define IMX_SC_C_SYNC_CTRL1			33
#define IMX_SC_C_DPI_RESET			34
#define IMX_SC_C_MIPI_RESET			35
#define IMX_SC_C_DUAL_MODE			36
#define IMX_SC_C_VOLTAGE			37
#define IMX_SC_C_PXL_LINK_SEL			38
#define IMX_SC_C_OFS_SEL			39
#define IMX_SC_C_OFS_AUDIO			40
#define IMX_SC_C_OFS_PERIPH			41
#define IMX_SC_C_OFS_IRQ			42
#define IMX_SC_C_RST0				43
#define IMX_SC_C_RST1				44
#define IMX_SC_C_SEL0				45
#define IMX_SC_C_LAST				46

#endif /* __DT_BINDINGS_RSCRC_IMX_H */
