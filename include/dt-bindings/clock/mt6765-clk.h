/* SPDX-License-Identifier: GPL-2.0 */

#ifndef _DT_BINDINGS_CLK_MT6765_H
#define _DT_BINDINGS_CLK_MT6765_H

/* FIX Clks */
#define CLK_TOP_CLK26M			0

/* APMIXEDSYS */
#define CLK_APMIXED_ARMPLL_L		0
#define CLK_APMIXED_ARMPLL		1
#define CLK_APMIXED_CCIPLL		2
#define CLK_APMIXED_MAINPLL		3
#define CLK_APMIXED_MFGPLL		4
#define CLK_APMIXED_MMPLL		5
#define CLK_APMIXED_UNIV2PLL		6
#define CLK_APMIXED_MSDCPLL		7
#define CLK_APMIXED_APLL1		8
#define CLK_APMIXED_MPLL		9
#define CLK_APMIXED_ULPOSC1		10
#define CLK_APMIXED_ULPOSC2		11
#define CLK_APMIXED_SSUSB26M		12
#define CLK_APMIXED_APPLL26M		13
#define CLK_APMIXED_MIPIC0_26M		14
#define CLK_APMIXED_MDPLLGP26M		15
#define CLK_APMIXED_MMSYS_F26M		16
#define CLK_APMIXED_UFS26M		17
#define CLK_APMIXED_MIPIC1_26M		18
#define CLK_APMIXED_MEMPLL26M		19
#define CLK_APMIXED_CLKSQ_LVPLL_26M	20
#define CLK_APMIXED_MIPID0_26M		21
#define CLK_APMIXED_NR_CLK		22

/* TOPCKGEN */
#define CLK_TOP_SYSPLL			0
#define CLK_TOP_SYSPLL_D2		1
#define CLK_TOP_SYSPLL1_D2		2
#define CLK_TOP_SYSPLL1_D4		3
#define CLK_TOP_SYSPLL1_D8		4
#define CLK_TOP_SYSPLL1_D16		5
#define CLK_TOP_SYSPLL_D3		6
#define CLK_TOP_SYSPLL2_D2		7
#define CLK_TOP_SYSPLL2_D4		8
#define CLK_TOP_SYSPLL2_D8		9
#define CLK_TOP_SYSPLL_D5		10
#define CLK_TOP_SYSPLL3_D2		11
#define CLK_TOP_SYSPLL3_D4		12
#define CLK_TOP_SYSPLL_D7		13
#define CLK_TOP_SYSPLL4_D2		14
#define CLK_TOP_SYSPLL4_D4		15
#define CLK_TOP_USB20_192M		16
#define CLK_TOP_USB20_192M_D4		17
#define CLK_TOP_USB20_192M_D8		18
#define CLK_TOP_USB20_192M_D16		19
#define CLK_TOP_USB20_192M_D32		20
#define CLK_TOP_UNIVPLL			21
#define CLK_TOP_UNIVPLL_D2		22
#define CLK_TOP_UNIVPLL1_D2		23
#define CLK_TOP_UNIVPLL1_D4		24
#define CLK_TOP_UNIVPLL_D3		25
#define CLK_TOP_UNIVPLL2_D2		26
#define CLK_TOP_UNIVPLL2_D4		27
#define CLK_TOP_UNIVPLL2_D8		28
#define CLK_TOP_UNIVPLL2_D32		29
#define CLK_TOP_UNIVPLL_D5		30
#define CLK_TOP_UNIVPLL3_D2		31
#define CLK_TOP_UNIVPLL3_D4		32
#define CLK_TOP_MMPLL			33
#define CLK_TOP_MMPLL_D2		34
#define CLK_TOP_MPLL			35
#define CLK_TOP_DA_MPLL_104M_DIV	36
#define CLK_TOP_DA_MPLL_52M_DIV		37
#define CLK_TOP_MFGPLL			38
#define CLK_TOP_MSDCPLL			39
#define CLK_TOP_MSDCPLL_D2		40
#define CLK_TOP_APLL1			41
#define CLK_TOP_APLL1_D2		42
#define CLK_TOP_APLL1_D4		43
#define CLK_TOP_APLL1_D8		44
#define CLK_TOP_ULPOSC1			45
#define CLK_TOP_ULPOSC1_D2		46
#define CLK_TOP_ULPOSC1_D4		47
#define CLK_TOP_ULPOSC1_D8		48
#define CLK_TOP_ULPOSC1_D16		49
#define CLK_TOP_ULPOSC1_D32		50
#define CLK_TOP_DMPLL			51
#define CLK_TOP_F_FRTC			52
#define CLK_TOP_F_F26M			53
#define CLK_TOP_AXI			54
#define CLK_TOP_MM			55
#define CLK_TOP_SCP			56
#define CLK_TOP_MFG			57
#define CLK_TOP_F_FUART			58
#define CLK_TOP_SPI			59
#define CLK_TOP_MSDC50_0		60
#define CLK_TOP_MSDC30_1		61
#define CLK_TOP_AUDIO			62
#define CLK_TOP_AUD_1			63
#define CLK_TOP_AUD_ENGEN1		64
#define CLK_TOP_F_FDISP_PWM		65
#define CLK_TOP_SSPM			66
#define CLK_TOP_DXCC			67
#define CLK_TOP_I2C			68
#define CLK_TOP_F_FPWM			69
#define CLK_TOP_F_FSENINF		70
#define CLK_TOP_AES_FDE			71
#define CLK_TOP_F_BIST2FPC		72
#define CLK_TOP_ARMPLL_DIVIDER_PLL0	73
#define CLK_TOP_ARMPLL_DIVIDER_PLL1	74
#define CLK_TOP_ARMPLL_DIVIDER_PLL2	75
#define CLK_TOP_DA_USB20_48M_DIV	76
#define CLK_TOP_DA_UNIV_48M_DIV		77
#define CLK_TOP_APLL12_DIV0		78
#define CLK_TOP_APLL12_DIV1		79
#define CLK_TOP_APLL12_DIV2		80
#define CLK_TOP_APLL12_DIV3		81
#define CLK_TOP_ARMPLL_DIVIDER_PLL0_EN	82
#define CLK_TOP_ARMPLL_DIVIDER_PLL1_EN	83
#define CLK_TOP_ARMPLL_DIVIDER_PLL2_EN	84
#define CLK_TOP_FMEM_OCC_DRC_EN		85
#define CLK_TOP_USB20_48M_EN		86
#define CLK_TOP_UNIVPLL_48M_EN		87
#define CLK_TOP_MPLL_104M_EN		88
#define CLK_TOP_MPLL_52M_EN		89
#define CLK_TOP_F_UFS_MP_SAP_CFG_EN	90
#define CLK_TOP_F_BIST2FPC_EN		91
#define CLK_TOP_MD_32K			92
#define CLK_TOP_MD_26M			93
#define CLK_TOP_MD2_32K			94
#define CLK_TOP_MD2_26M			95
#define CLK_TOP_AXI_SEL			96
#define CLK_TOP_MEM_SEL			97
#define CLK_TOP_MM_SEL			98
#define CLK_TOP_SCP_SEL			99
#define CLK_TOP_MFG_SEL			100
#define CLK_TOP_ATB_SEL			101
#define CLK_TOP_CAMTG_SEL		102
#define CLK_TOP_CAMTG1_SEL		103
#define CLK_TOP_CAMTG2_SEL		104
#define CLK_TOP_CAMTG3_SEL		105
#define CLK_TOP_UART_SEL		106
#define CLK_TOP_SPI_SEL			107
#define CLK_TOP_MSDC50_0_HCLK_SEL	108
#define CLK_TOP_MSDC50_0_SEL		109
#define CLK_TOP_MSDC30_1_SEL		110
#define CLK_TOP_AUDIO_SEL		111
#define CLK_TOP_AUD_INTBUS_SEL		112
#define CLK_TOP_AUD_1_SEL		113
#define CLK_TOP_AUD_ENGEN1_SEL		114
#define CLK_TOP_DISP_PWM_SEL		115
#define CLK_TOP_SSPM_SEL		116
#define CLK_TOP_DXCC_SEL		117
#define CLK_TOP_USB_TOP_SEL		118
#define CLK_TOP_SPM_SEL			119
#define CLK_TOP_I2C_SEL			120
#define CLK_TOP_PWM_SEL			121
#define CLK_TOP_SENINF_SEL		122
#define CLK_TOP_AES_FDE_SEL		123
#define CLK_TOP_PWRAP_ULPOSC_SEL	124
#define CLK_TOP_CAMTM_SEL		125
#define CLK_TOP_NR_CLK			126

/* INFRACFG */
#define CLK_IFR_ICUSB			0
#define CLK_IFR_GCE			1
#define CLK_IFR_THERM			2
#define CLK_IFR_I2C_AP			3
#define CLK_IFR_I2C_CCU			4
#define CLK_IFR_I2C_SSPM		5
#define CLK_IFR_I2C_RSV			6
#define CLK_IFR_PWM_HCLK		7
#define CLK_IFR_PWM1			8
#define CLK_IFR_PWM2			9
#define CLK_IFR_PWM3			10
#define CLK_IFR_PWM4			11
#define CLK_IFR_PWM5			12
#define CLK_IFR_PWM			13
#define CLK_IFR_UART0			14
#define CLK_IFR_UART1			15
#define CLK_IFR_GCE_26M			16
#define CLK_IFR_CQ_DMA_FPC		17
#define CLK_IFR_BTIF			18
#define CLK_IFR_SPI0			19
#define CLK_IFR_MSDC0			20
#define CLK_IFR_MSDC1			21
#define CLK_IFR_TRNG			22
#define CLK_IFR_AUXADC			23
#define CLK_IFR_CCIF1_AP		24
#define CLK_IFR_CCIF1_MD		25
#define CLK_IFR_AUXADC_MD		26
#define CLK_IFR_AP_DMA			27
#define CLK_IFR_DEVICE_APC		28
#define CLK_IFR_CCIF_AP			29
#define CLK_IFR_AUDIO			30
#define CLK_IFR_CCIF_MD			31
#define CLK_IFR_RG_PWM_FBCLK6		32
#define CLK_IFR_DISP_PWM		33
#define CLK_IFR_CLDMA_BCLK		34
#define CLK_IFR_AUDIO_26M_BCLK		35
#define CLK_IFR_SPI1			36
#define CLK_IFR_I2C4			37
#define CLK_IFR_SPI2			38
#define CLK_IFR_SPI3			39
#define CLK_IFR_I2C5			40
#define CLK_IFR_I2C5_ARBITER		41
#define CLK_IFR_I2C5_IMM		42
#define CLK_IFR_I2C1_ARBITER		43
#define CLK_IFR_I2C1_IMM		44
#define CLK_IFR_I2C2_ARBITER		45
#define CLK_IFR_I2C2_IMM		46
#define CLK_IFR_SPI4			47
#define CLK_IFR_SPI5			48
#define CLK_IFR_CQ_DMA			49
#define CLK_IFR_FAES_FDE		50
#define CLK_IFR_MSDC0_SELF		51
#define CLK_IFR_MSDC1_SELF		52
#define CLK_IFR_I2C6			53
#define CLK_IFR_AP_MSDC0		54
#define CLK_IFR_MD_MSDC0		55
#define CLK_IFR_MSDC0_SRC		56
#define CLK_IFR_MSDC1_SRC		57
#define CLK_IFR_AES_TOP0_BCLK		58
#define CLK_IFR_MCU_PM_BCLK		59
#define CLK_IFR_CCIF2_AP		60
#define CLK_IFR_CCIF2_MD		61
#define CLK_IFR_CCIF3_AP		62
#define CLK_IFR_CCIF3_MD		63
#define CLK_IFR_NR_CLK			64

/* AUDIO */
#define CLK_AUDIO_AFE			0
#define CLK_AUDIO_22M			1
#define CLK_AUDIO_APLL_TUNER		2
#define CLK_AUDIO_ADC			3
#define CLK_AUDIO_DAC			4
#define CLK_AUDIO_DAC_PREDIS		5
#define CLK_AUDIO_TML			6
#define CLK_AUDIO_I2S1_BCLK		7
#define CLK_AUDIO_I2S2_BCLK		8
#define CLK_AUDIO_I2S3_BCLK		9
#define CLK_AUDIO_I2S4_BCLK		10
#define CLK_AUDIO_NR_CLK		11

/* MIPI_RX_ANA_CSI0A */

#define CLK_MIPI0A_CSR_CSI_EN_0A	0
#define CLK_MIPI0A_NR_CLK		1

/* MMSYS_CONFIG */

#define CLK_MM_MDP_RDMA0		0
#define CLK_MM_MDP_CCORR0		1
#define CLK_MM_MDP_RSZ0			2
#define CLK_MM_MDP_RSZ1			3
#define CLK_MM_MDP_TDSHP0		4
#define CLK_MM_MDP_WROT0		5
#define CLK_MM_MDP_WDMA0		6
#define CLK_MM_DISP_OVL0		7
#define CLK_MM_DISP_OVL0_2L		8
#define CLK_MM_DISP_RSZ0		9
#define CLK_MM_DISP_RDMA0		10
#define CLK_MM_DISP_WDMA0		11
#define CLK_MM_DISP_COLOR0		12
#define CLK_MM_DISP_CCORR0		13
#define CLK_MM_DISP_AAL0		14
#define CLK_MM_DISP_GAMMA0		15
#define CLK_MM_DISP_DITHER0		16
#define CLK_MM_DSI0			17
#define CLK_MM_FAKE_ENG			18
#define CLK_MM_SMI_COMMON		19
#define CLK_MM_SMI_LARB0		20
#define CLK_MM_SMI_COMM0		21
#define CLK_MM_SMI_COMM1		22
#define CLK_MM_CAM_MDP			23
#define CLK_MM_SMI_IMG			24
#define CLK_MM_SMI_CAM			25
#define CLK_MM_IMG_DL_RELAY		26
#define CLK_MM_IMG_DL_ASYNC_TOP		27
#define CLK_MM_DIG_DSI			28
#define CLK_MM_F26M_HRTWT		29
#define CLK_MM_NR_CLK			30

/* IMGSYS */

#define CLK_IMG_LARB2			0
#define CLK_IMG_DIP			1
#define CLK_IMG_FDVT			2
#define CLK_IMG_DPE			3
#define CLK_IMG_RSC			4
#define CLK_IMG_NR_CLK			5

/* VENCSYS */

#define CLK_VENC_SET0_LARB		0
#define CLK_VENC_SET1_VENC		1
#define CLK_VENC_SET2_JPGENC		2
#define CLK_VENC_SET3_VDEC		3
#define CLK_VENC_NR_CLK			4

/* CAMSYS */

#define CLK_CAM_LARB3			0
#define CLK_CAM_DFP_VAD			1
#define CLK_CAM				2
#define CLK_CAMTG			3
#define CLK_CAM_SENINF			4
#define CLK_CAMSV0			5
#define CLK_CAMSV1			6
#define CLK_CAMSV2			7
#define CLK_CAM_CCU			8
#define CLK_CAM_NR_CLK			9

#endif /* _DT_BINDINGS_CLK_MT6765_H */
