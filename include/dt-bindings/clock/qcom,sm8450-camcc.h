/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2020-2021, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_CAM_CC_SM8450_H
#define _DT_BINDINGS_CLK_QCOM_CAM_CC_SM8450_H

/* CAM_CC clocks */
#define CAM_CC_BPS_AHB_CLK					0
#define CAM_CC_BPS_CLK						1
#define CAM_CC_BPS_CLK_SRC					2
#define CAM_CC_BPS_FAST_AHB_CLK					3
#define CAM_CC_CAMNOC_AXI_CLK					4
#define CAM_CC_CAMNOC_AXI_CLK_SRC				5
#define CAM_CC_CAMNOC_DCD_XO_CLK				6
#define CAM_CC_CCI_0_CLK					7
#define CAM_CC_CCI_0_CLK_SRC					8
#define CAM_CC_CCI_1_CLK					9
#define CAM_CC_CCI_1_CLK_SRC					10
#define CAM_CC_CORE_AHB_CLK					11
#define CAM_CC_CPAS_AHB_CLK					12
#define CAM_CC_CPAS_BPS_CLK					13
#define CAM_CC_CPAS_FAST_AHB_CLK				14
#define CAM_CC_CPAS_IFE_0_CLK					15
#define CAM_CC_CPAS_IFE_1_CLK					16
#define CAM_CC_CPAS_IFE_2_CLK					17
#define CAM_CC_CPAS_IFE_LITE_CLK				18
#define CAM_CC_CPAS_IPE_NPS_CLK					19
#define CAM_CC_CPAS_SBI_CLK					20
#define CAM_CC_CPAS_SFE_0_CLK					21
#define CAM_CC_CPAS_SFE_1_CLK					22
#define CAM_CC_CPHY_RX_CLK_SRC					23
#define CAM_CC_CSI0PHYTIMER_CLK					24
#define CAM_CC_CSI0PHYTIMER_CLK_SRC				25
#define CAM_CC_CSI1PHYTIMER_CLK					26
#define CAM_CC_CSI1PHYTIMER_CLK_SRC				27
#define CAM_CC_CSI2PHYTIMER_CLK					28
#define CAM_CC_CSI2PHYTIMER_CLK_SRC				29
#define CAM_CC_CSI3PHYTIMER_CLK					30
#define CAM_CC_CSI3PHYTIMER_CLK_SRC				31
#define CAM_CC_CSI4PHYTIMER_CLK					32
#define CAM_CC_CSI4PHYTIMER_CLK_SRC				33
#define CAM_CC_CSI5PHYTIMER_CLK					34
#define CAM_CC_CSI5PHYTIMER_CLK_SRC				35
#define CAM_CC_CSID_CLK						36
#define CAM_CC_CSID_CLK_SRC					37
#define CAM_CC_CSID_CSIPHY_RX_CLK				38
#define CAM_CC_CSIPHY0_CLK					39
#define CAM_CC_CSIPHY1_CLK					40
#define CAM_CC_CSIPHY2_CLK					41
#define CAM_CC_CSIPHY3_CLK					42
#define CAM_CC_CSIPHY4_CLK					43
#define CAM_CC_CSIPHY5_CLK					44
#define CAM_CC_FAST_AHB_CLK_SRC					45
#define CAM_CC_GDSC_CLK						46
#define CAM_CC_ICP_AHB_CLK					47
#define CAM_CC_ICP_CLK						48
#define CAM_CC_ICP_CLK_SRC					49
#define CAM_CC_IFE_0_CLK					50
#define CAM_CC_IFE_0_CLK_SRC					51
#define CAM_CC_IFE_0_DSP_CLK					52
#define CAM_CC_IFE_0_FAST_AHB_CLK				53
#define CAM_CC_IFE_1_CLK					54
#define CAM_CC_IFE_1_CLK_SRC					55
#define CAM_CC_IFE_1_DSP_CLK					56
#define CAM_CC_IFE_1_FAST_AHB_CLK				57
#define CAM_CC_IFE_2_CLK					58
#define CAM_CC_IFE_2_CLK_SRC					59
#define CAM_CC_IFE_2_DSP_CLK					60
#define CAM_CC_IFE_2_FAST_AHB_CLK				61
#define CAM_CC_IFE_LITE_AHB_CLK					62
#define CAM_CC_IFE_LITE_CLK					63
#define CAM_CC_IFE_LITE_CLK_SRC					64
#define CAM_CC_IFE_LITE_CPHY_RX_CLK				65
#define CAM_CC_IFE_LITE_CSID_CLK				66
#define CAM_CC_IFE_LITE_CSID_CLK_SRC				67
#define CAM_CC_IPE_NPS_AHB_CLK					68
#define CAM_CC_IPE_NPS_CLK					69
#define CAM_CC_IPE_NPS_CLK_SRC					70
#define CAM_CC_IPE_NPS_FAST_AHB_CLK				71
#define CAM_CC_IPE_PPS_CLK					72
#define CAM_CC_IPE_PPS_FAST_AHB_CLK				73
#define CAM_CC_JPEG_CLK						74
#define CAM_CC_JPEG_CLK_SRC					75
#define CAM_CC_MCLK0_CLK					76
#define CAM_CC_MCLK0_CLK_SRC					77
#define CAM_CC_MCLK1_CLK					78
#define CAM_CC_MCLK1_CLK_SRC					79
#define CAM_CC_MCLK2_CLK					80
#define CAM_CC_MCLK2_CLK_SRC					81
#define CAM_CC_MCLK3_CLK					82
#define CAM_CC_MCLK3_CLK_SRC					83
#define CAM_CC_MCLK4_CLK					84
#define CAM_CC_MCLK4_CLK_SRC					85
#define CAM_CC_MCLK5_CLK					86
#define CAM_CC_MCLK5_CLK_SRC					87
#define CAM_CC_MCLK6_CLK					88
#define CAM_CC_MCLK6_CLK_SRC					89
#define CAM_CC_MCLK7_CLK					90
#define CAM_CC_MCLK7_CLK_SRC					91
#define CAM_CC_PLL0						92
#define CAM_CC_PLL0_OUT_EVEN					93
#define CAM_CC_PLL0_OUT_ODD					94
#define CAM_CC_PLL1						95
#define CAM_CC_PLL1_OUT_EVEN					96
#define CAM_CC_PLL2						97
#define CAM_CC_PLL3						98
#define CAM_CC_PLL3_OUT_EVEN					99
#define CAM_CC_PLL4						100
#define CAM_CC_PLL4_OUT_EVEN					101
#define CAM_CC_PLL5						102
#define CAM_CC_PLL5_OUT_EVEN					103
#define CAM_CC_PLL6						104
#define CAM_CC_PLL6_OUT_EVEN					105
#define CAM_CC_PLL7						106
#define CAM_CC_PLL7_OUT_EVEN					107
#define CAM_CC_PLL8						108
#define CAM_CC_PLL8_OUT_EVEN					109
#define CAM_CC_QDSS_DEBUG_CLK					110
#define CAM_CC_QDSS_DEBUG_CLK_SRC				111
#define CAM_CC_QDSS_DEBUG_XO_CLK				112
#define CAM_CC_SBI_AHB_CLK					113
#define CAM_CC_SBI_CLK						114
#define CAM_CC_SFE_0_CLK					115
#define CAM_CC_SFE_0_CLK_SRC					116
#define CAM_CC_SFE_0_FAST_AHB_CLK				117
#define CAM_CC_SFE_1_CLK					118
#define CAM_CC_SFE_1_CLK_SRC					119
#define CAM_CC_SFE_1_FAST_AHB_CLK				120
#define CAM_CC_SLEEP_CLK					121
#define CAM_CC_SLEEP_CLK_SRC					122
#define CAM_CC_SLOW_AHB_CLK_SRC					123
#define CAM_CC_XO_CLK_SRC					124

/* CAM_CC resets */
#define CAM_CC_BPS_BCR						0
#define CAM_CC_ICP_BCR						1
#define CAM_CC_IFE_0_BCR					2
#define CAM_CC_IFE_1_BCR					3
#define CAM_CC_IFE_2_BCR					4
#define CAM_CC_IPE_0_BCR					5
#define CAM_CC_QDSS_DEBUG_BCR					6
#define CAM_CC_SBI_BCR						7
#define CAM_CC_SFE_0_BCR					8
#define CAM_CC_SFE_1_BCR					9

/* CAM_CC GDSCRs */
#define BPS_GDSC		0
#define IPE_0_GDSC		1
#define SBI_GDSC		2
#define IFE_0_GDSC		3
#define IFE_1_GDSC		4
#define IFE_2_GDSC		5
#define SFE_0_GDSC		6
#define SFE_1_GDSC		7
#define TITAN_TOP_GDSC		8

#endif
