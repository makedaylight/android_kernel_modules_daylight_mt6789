/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __AP2WF_CONN_INFRA_ON_CCIF4_REGS_H__
#define __AP2WF_CONN_INFRA_ON_CCIF4_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AP2WF_CONN_INFRA_ON_CCIF4_BASE \
	(0x1803D000 + CONN_INFRA_REMAPPING_OFFSET)

#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_BUSY_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0004)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_START_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0008)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_TCHNUM_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x000C)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_RCHNUM_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0010)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_ACK_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0014)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_IRQ0_MASK_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0018)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_IRQ1_MASK_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x001C)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_DUMMY1_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0020)
#define AP2WF_CONN_INFRA_ON_CCIF4_AP2WF_PCCIF_DUMMY2_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0024)
#define AP2WF_CONN_INFRA_ON_CCIF4_WF2AP_SHADOW1_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0030)
#define AP2WF_CONN_INFRA_ON_CCIF4_WF2AP_SHADOW2_ADDR \
	(AP2WF_CONN_INFRA_ON_CCIF4_BASE + 0x0034)

#ifdef __cplusplus
}
#endif

#endif
