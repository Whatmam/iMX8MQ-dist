/*
 * Copyright 2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef GPC_REG_H
#define GPC_REG_H

#define LPCR_A53_BSC			0x0
#define LPCR_A53_BSC2			0x108
#define LPCR_A53_AD			0x4
#define LPCR_M4				0x8
#define SLPCR				0x14
#define MST_CPU_MAPPING			0x18
#define MLPCR				0x20
#define PGC_ACK_SEL_A53			0x24
#define IMR1_CORE0_A53			0x30
#define IMR1_CORE1_A53			0x40
#define IMR1_CORE2_A53			0x1C0
#define IMR1_CORE3_A53			0x1D0
#define IMR1_CORE0_M4			0x50
#define SLT0_CFG			0xB0
#define GPC_PU_PWRHSK			0x1FC
#define PGC_CPU_0_1_MAPPING		0xEC
#define CPU_PGC_UP_TRG			0xF0
#define PU_PGC_UP_TRG			0xF8
#define CPU_PGC_DN_TRG			0xFC
#define PU_PGC_DN_TRG			0x104
#define LPS_CPU1			0x114
#define A53_CORE0_PGC			0x800
#define A53_PLAT_PGC			0x900
#define PLAT_PGC_PCR			0x900
#define NOC_PGC_PCR			0xa40
#define PGC_SCU_TIMING			0x910

#define MASK_DSM_TRIGGER_A53		BIT(31)
#define IRQ_SRC_A53_WUP			BIT(30)
#define IRQ_SRC_A53_WUP_SHIFT		30
#define IRQ_SRC_C1			BIT(29)
#define IRQ_SRC_C0			BIT(28)
#define IRQ_SRC_C3			BIT(23)
#define IRQ_SRC_C2			BIT(22)
#define CPU_CLOCK_ON_LPM		BIT(14)
#define A53_CLK_ON_LPM			BIT(14)
#define MASTER0_LPM_HSK			BIT(6)
#define MASTER1_LPM_HSK			BIT(7)
#define MASTER2_LPM_HSK			BIT(8)

#define L2PGE				BIT(31)
#define EN_L2_WFI_PDN			BIT(5)
#define EN_PLAT_PDN			BIT(4)

#define SLPCR_EN_DSM			BIT(31)
#define SLPCR_RBC_EN			BIT(30)
#define SLPCR_A53_FASTWUP_STOP_MODE	BIT(17)
#define SLPCR_A53_FASTWUP_WAIT_MODE	BIT(16)
#define SLPCR_VSTBY			BIT(2)
#define SLPCR_SBYOS			BIT(1)
#define SLPCR_BYPASS_PMIC_READY		BIT(0)
#define SLPCR_RBC_COUNT_SHIFT		24
#define SLPCR_STBY_COUNT_SHFT		3

#define A53_DUMMY_PDN_ACK		BIT(15)
#define A53_DUMMY_PUP_ACK		BIT(31)
#define A53_PLAT_PDN_ACK		BIT(2)
#define A53_PLAT_PUP_ACK		BIT(18)
#define NOC_PDN_SLT_CTRL		BIT(10)
#define NOC_PUP_SLT_CTRL		BIT(11)
#define NOC_PGC_PDN_ACK			BIT(3)
#define NOC_PGC_PUP_ACK			BIT(19)

#define PLAT_PUP_SLT_CTRL		BIT(9)
#define PLAT_PDN_SLT_CTRL		BIT(8)

#define SLT_PLAT_PDN			BIT(8)
#define SLT_PLAT_PUP			BIT(9)

#define MASTER1_MAPPING			BIT(1)
#define MASTER2_MAPPING			BIT(2)

#define MIPI_PWR_REQ			BIT(0)
#define PCIE_PWR_REQ			BIT(1)
#define OTG1_PWR_REQ			BIT(2)
#define OTG2_PWR_REQ			BIT(3)
#define HSIOMIX_PWR_REQ			BIT(4)
#define DDRMIX_PWR_REQ			BIT(5)
#define GPU2D_PWR_REQ			BIT(6)
#define GPUMIX_PWR_REQ			BIT(7)
#define VPUMIX_PWR_REQ			BIT(8)
#define GPU3D_PWR_REQ			BIT(9)
#define DISPMIX_PWR_REQ			BIT(10)
#define VPU_G1_PWR_REQ			BIT(11)
#define VPU_G2_PWR_REQ			BIT(12)
#define VPU_H1_PWR_REQ			BIT(13)

#define DDRMIX_ADB400_SYNC		BIT(2)
#define HSIOMIX_ADB400_SYNC		(0x3 << 5)
#define DISPMIX_ADB400_SYNC		BIT(7)
#define VPUMIX_ADB400_SYNC		BIT(8)
#define GPU3D_ADB400_SYNC		BIT(9)
#define GPU2D_ADB400_SYNC		BIT(10)
#define GPUMIX_ADB400_SYNC		BIT(11)
#define DDRMIX_ADB400_ACK		BIT(20)
#define HSIOMIX_ADB400_ACK		(0x3 << 23)
#define DISPMIX_ADB400_ACK		BIT(25)
#define VPUMIX_ADB400_ACK		BIT(26)
#define GPU3D_ADB400_ACK		BIT(27)
#define GPU2D_ADB400_ACK		BIT(28)
#define GPUMIX_ADB400_ACK		BIT(29)

#define MIPI_PGC			0xc00
#define PCIE_PGC			0xc40
#define OTG1_PGC			0xc80
#define OTG2_PGC			0xcc0
#define HSIOMIX_PGC			0xd00
#define DDRMIX_PGC			0xd40
#define GPU2D_PGC			0xd80
#define GPUMIX_PGC			0xdc0
#define VPUMIX_PGC			0xe00
#define GPU3D_PGC			0xe40
#define DISPMIX_PGC			0xe80
#define VPU_G1_PGC			0xec0
#define VPU_G2_PGC			0xf00
#define VPU_H1_PGC			0xf40

#define IRQ_IMR_NUM			U(4)

#endif /* GPC_REG_H */

