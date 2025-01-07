/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_REGS_H__
#define __WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE \
	0x810F0000

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x000)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL1_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x004)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL2_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x008)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT0_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x400)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT1_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x404)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT2_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x408)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT3_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x40C)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT4_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x410)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT5_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x414)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT6_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x418)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT7_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x41C)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT8_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x420)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT9_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x424)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT10_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x428)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT11_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x42C)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT12_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x430)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT13_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x434)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT14_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x438)
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT15_ADDR \
	(WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_BASE + 0x43C)


#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_MASK \
	0xFFFF0000
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_thres_SHFT \
	16
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_MASK \
	0x00000200
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_clr_SHFT \
	9
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_irq_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_irq_MASK \
	0x00000100
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_irq_SHFT \
	8
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_clk_detect_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_clk_detect_MASK \
	0x000000E0
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_clk_detect_SHFT \
	5
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_MASK \
	0x00000010
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_debugtop_SHFT \
	4
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_MASK \
	0x00000008
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_cken_SHFT \
	3
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_MASK \
	0x00000004
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_debug_en_SHFT \
	2
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_type_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_type_MASK \
	0x00000002
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_type_SHFT \
	1
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_MASK \
	0x00000001
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL0_timeout_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL1_idle0_mask_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL1_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL1_idle0_mask_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL1_idle0_mask_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL2_idle1_mask_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL2_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL2_idle1_mask_MASK \
	0x003FFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_CTRL2_idle1_mask_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT0_sys_timer_value_0_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT0_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT0_sys_timer_value_0_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT0_sys_timer_value_0_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT1_sys_timer_value_1_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT1_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT1_sys_timer_value_1_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT1_sys_timer_value_1_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT2_debug_result2_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT2_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT2_debug_result2_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT2_debug_result2_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT3_debug_result3_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT3_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT3_debug_result3_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT3_debug_result3_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT4_debug_result4_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT4_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT4_debug_result4_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT4_debug_result4_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT5_debug_result5_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT5_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT5_debug_result5_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT5_debug_result5_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT6_debug_result6_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT6_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT6_debug_result6_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT6_debug_result6_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT7_debug_result7_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT7_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT7_debug_result7_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT7_debug_result7_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT8_debug_result8_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT8_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT8_debug_result8_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT8_debug_result8_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT9_debug_result9_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT9_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT9_debug_result9_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT9_debug_result9_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT10_debug_result10_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT10_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT10_debug_result10_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT10_debug_result10_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT11_debug_result11_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT11_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT11_debug_result11_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT11_debug_result11_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT12_debug_result12_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT12_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT12_debug_result12_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT12_debug_result12_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT13_debug_result13_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT13_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT13_debug_result13_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT13_debug_result13_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT14_debug_result14_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT14_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT14_debug_result14_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT14_debug_result14_SHFT \
	0

#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT15_debug_result15_ADDR \
	WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT15_ADDR
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT15_debug_result15_MASK \
	0xFFFFFFFF
#define WF_MCUSYS_VDNR_GEN_BUS_U_DEBUG_CTRL_AO_WFMCU_PWA_RESULT15_debug_result15_SHFT \
	0

#ifdef __cplusplus
}
#endif

#endif
