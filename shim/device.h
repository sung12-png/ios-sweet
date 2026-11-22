#pragma once
/* Per-device constants. Select with -DDEVICE_SWEET (default) or -DDEVICE_AVATRN. */
#if defined(DEVICE_AVATRN)
/* Moto Edge 2024, SM7435 "parrot" (stock vendor_boot DTB) */
#define DEV_NAME		"avatrn"
#define DEV_IMEM_RESTART_REASON	0x146aa65cUL
#define DEV_PSHOLD		0UL		/* none known; PSCI SYSTEM_RESET only */
#define DEV_GICD_BASE		0x17200000UL
#define DEV_GICR_BASE		0x17260000UL
#define DEV_GICR_SIZE		0x100000UL
#define DEV_VTIMER_INTID	27		/* DT: <GIC_PPI 11 ...> */
#define DEV_PTIMER_INTID	30		/* DT: <GIC_PPI 14 ...> */
#define DEV_UFS_BASE		0x01d84000UL
/* live FDT: reserved-memory splash_region 0xb8000000 +0x2b00000 */
#define DEV_FB_BASE		0xb8000000UL
#define DEV_FB_W		1080
#define DEV_FB_H		2400
#else
/* Redmi Note 10 Pro, SM7150 */
#define DEV_NAME		"sweet"
#define DEV_IMEM_RESTART_REASON	0x146aa65cUL
#define DEV_PSHOLD		0x0c264000UL
#define DEV_GICD_BASE		0x17a00000UL
#define DEV_GICR_BASE		0x17a60000UL
#define DEV_GICR_SIZE		0x100000UL
#define DEV_VTIMER_INTID	19		/* DT: <GIC_PPI 3 ...> */
#define DEV_PTIMER_INTID	18
#define DEV_UFS_BASE		0x01d84000UL
#define DEV_FB_BASE		0x9c000000UL
#define DEV_FB_W		1080
#define DEV_FB_H		2400
#endif
