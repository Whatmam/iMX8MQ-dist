/*
 * Copyright 2018-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef PMU_H
#define PMU_H

/* PMU Registers' OFFSET */
#define PMU_PCPW20SR_OFFSET           0x830
#define PMU_CLL2FLUSHSETR_OFFSET      0x1110
#define PMU_CLSL2FLUSHCLRR_OFFSET     0x1114
#define PMU_CLL2FLUSHSR_OFFSET        0x1118
#define PMU_POWMGTCSR_VAL             (1 << 20)

/* PMU Registers */
#define CORE_TIMEBASE_ENBL_OFFSET	0x8A0
#define CLUST_TIMER_BASE_ENBL_OFFSET	0x18A0

#define PMU_IDLE_CLUSTER_MASK         0x2
#define PMU_FLUSH_CLUSTER_MASK        0x2
#define PMU_IDLE_CORE_MASK            0xfe

/* pmu register offsets and bitmaps */
#define PMU_POWMGTDCR0_OFFSET     0xC20
#define PMU_POWMGTCSR_OFFSET      0x4000
#define PMU_CLAINACTSETR_OFFSET   0x1100
#define PMU_CLAINACTCLRR_OFFSET   0x1104
#define PMU_CLSINACTSETR_OFFSET   0x1108
#define PMU_CLSINACTCLRR_OFFSET   0x110C
#define PMU_CLL2FLUSHSETR_OFFSET  0x1110
#define PMU_CLL2FLUSHCLRR_OFFSET  0x1114
#define PMU_IPPDEXPCR0_OFFSET     0x4040
#define PMU_IPPDEXPCR1_OFFSET     0x4044
#define PMU_IPPDEXPCR2_OFFSET     0x4048
#define PMU_IPPDEXPCR3_OFFSET     0x404C
#define PMU_IPPDEXPCR4_OFFSET     0x4050
#define PMU_IPPDEXPCR5_OFFSET     0x4054
#define PMU_IPPDEXPCR6_OFFSET     0x4058
#define PMU_IPSTPCR0_OFFSET       0x4120
#define PMU_IPSTPCR1_OFFSET       0x4124
#define PMU_IPSTPCR2_OFFSET       0x4128
#define PMU_IPSTPCR3_OFFSET       0x412C
#define PMU_IPSTPCR4_OFFSET       0x4130
#define PMU_IPSTPCR5_OFFSET       0x4134
#define PMU_IPSTPCR6_OFFSET       0x4138
#define PMU_IPSTPACKSR0_OFFSET    0x4140
#define PMU_IPSTPACKSR1_OFFSET    0x4144
#define PMU_IPSTPACKSR2_OFFSET    0x4148
#define PMU_IPSTPACKSR3_OFFSET    0x414C
#define PMU_IPSTPACKSR4_OFFSET    0x4150
#define PMU_IPSTPACKSR5_OFFSET    0x4154
#define PMU_IPSTPACKSR6_OFFSET    0x4158

#define CLAINACT_DISABLE_ACP  0xFF
#define CLSINACT_DISABLE_SKY  0xFF
#define POWMGTDCR_STP_OV_EN       0x1
#define POWMGTCSR_LPM20_REQ       0x00100000

/* Used by PMU */
#define DEVDISR1_MASK             0x024F3504
#define DEVDISR2_MASK             0x0003FFFF
#define DEVDISR3_MASK             0x0000303F
#define DEVDISR4_MASK             0x0000FFFF
#define DEVDISR5_MASK             0x00F07603
#define DEVDISR6_MASK             0x00000001

#ifndef __ASSEMBLER__
void enable_timer_base_to_cluster(uintptr_t nxp_pmu_addr);
void enable_core_tb(uintptr_t nxp_pmu_addr);
#endif /* __ASSEMBLER__ */

#endif
