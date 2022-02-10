/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Device Tree constants for Microsemi VSC8531 PHY
 *
 * Author: Nagaraju Lakkaraju
 *
 * Copyright (c) 2017 Microsemi Corporation
 */

#ifndef _DT_BINDINGS_MSCC_VSC8531_H
#define _DT_BINDINGS_MSCC_VSC8531_H

/* PHY LED Modes */
#define VSC8531_LINK_ACTIVITY			0
#define VSC8531_LINK_1000_ACTIVITY		1
#define VSC8531_LINK_100_ACTIVITY		2
#define VSC8531_LINK_10_ACTIVITY		3
#define VSC8531_LINK_100_1000_ACTIVITY		4
#define VSC8531_LINK_10_1000_ACTIVITY		5
#define VSC8531_LINK_10_100_ACTIVITY		6
#define VSC8584_LINK_100FX_1000X_ACTIVITY	7
#define VSC8531_DUPLEX_COLLISION		8
#define VSC8531_COLLISION			9
#define VSC8531_ACTIVITY			10
#define VSC8584_100FX_1000X_ACTIVITY		11
#define VSC8531_AUTONEG_FAULT			12
#define VSC8531_SERIAL_MODE			13
#define VSC8531_FORCE_LED_OFF			14
#define VSC8531_FORCE_LED_ON			15

#define VSC8531_RGMII_CLK_DELAY_0_2_NS	0
#define VSC8531_RGMII_CLK_DELAY_0_8_NS	1
#define VSC8531_RGMII_CLK_DELAY_1_1_NS	2
#define VSC8531_RGMII_CLK_DELAY_1_7_NS	3
#define VSC8531_RGMII_CLK_DELAY_2_0_NS	4
#define VSC8531_RGMII_CLK_DELAY_2_3_NS	5
#define VSC8531_RGMII_CLK_DELAY_2_6_NS	6
#define VSC8531_RGMII_CLK_DELAY_3_4_NS	7

#endif
