/* 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
*/
#ifndef UI_PURE_DEFI_DIAG_INCLUDED
/* { */
#define UI_PURE_DEFI_DIAG_INCLUDED
/*
 * Note:
 * the following definitions must range between PARAM_DIAG_START_RANGE_ID (9300)
 * and PARAM_DIAG_END_RANGE_ID (9400).
 * See ui_pure_defi.h
 */
#define PARAM_DIAG_HW_ID                   (PARAM_DIAG_START_RANGE_ID + 1)
#define PARAM_DIAG_HW_MEM_ID               (PARAM_DIAG_START_RANGE_ID + 2)
#define PARAM_DIAG_HW_MEM_BASE_ADDR_ID     (PARAM_DIAG_START_RANGE_ID + 3)
#define PARAM_DIAG_HW_MEM_SIZE_ID          (PARAM_DIAG_START_RANGE_ID + 4)
#define PARAM_DIAG_HW_MEM_REVERT_DATA_ID   (PARAM_DIAG_START_RANGE_ID + 5)
#define PARAM_DIAG_HW_MEM_REVERT_OFFSET_ID (PARAM_DIAG_START_RANGE_ID + 6)
#define PARAM_DIAG_HW_MEM_DATA_WALK_ID     (PARAM_DIAG_START_RANGE_ID + 7)
#define PARAM_DIAG_HW_MEM_OFFSET_WALK_ID   (PARAM_DIAG_START_RANGE_ID + 8)
#define PARAM_DIAG_HW_MEM_ALIGNMENT_ID     (PARAM_DIAG_START_RANGE_ID + 9)

#define PARAM_DIAG_HW_MEM_SET_SPACE_ID     (PARAM_DIAG_START_RANGE_ID + 10)
#define PARAM_DIAG_HW_MEM_SPACE_ZBT_ID     (PARAM_DIAG_START_RANGE_ID + 11)
#define PARAM_DIAG_HW_MEM_SPACE_DRAM_ID    (PARAM_DIAG_START_RANGE_ID + 12)
#define PARAM_DIAG_HW_MEM_SPACE_CPU_ID     (PARAM_DIAG_START_RANGE_ID + 13)

#define PARAM_DIAG_VERBOSE_ID              (PARAM_DIAG_START_RANGE_ID + 14)

#define PARAM_DIAG_HW_MEM_PATTERN_ID       (PARAM_DIAG_START_RANGE_ID + 15)

/* } */
#endif