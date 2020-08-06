/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/fp/bcm56880_a0/bcm56880_a0_FP_ING_COS_Q_MAP.map.ltl for
 *      bcm56880_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* FP_ING_COS_Q_MAP field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_fp_ing_cos_q_map_map_field_data_mmd[] = {
    { /* 0 FP_ING_COS_Q_MAP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u16_0x1,
      .def = &bcm56880_a0_lrd_ifd_u16_0x1,
      .max = &bcm56880_a0_lrd_ifd_u16_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 UC_COS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xb,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 MC_COS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 3 RQE_COS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 CPU_COS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x2f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_fp_ing_cos_q_map_map_field_data = {
    .fields = 5,
    .field = bcm56880_a0_lrd_fp_ing_cos_q_map_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_fp_ing_cos_q_mapt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 511,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_fp_ing_cos_q_mapt_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_fp_ing_cos_q_mapt_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_index_offset_src_field_desc_s0[1] = {
    {
        .field_id  = FP_ING_COS_Q_MAPt_FP_ING_COS_Q_MAP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_index_offset_fp_ing_cos_q_map_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 8,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_fwd_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_INDEX_OFFSET_XFRM_HANDLER_FWD_S0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_index_offset_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_index_offset_fp_ing_cos_q_map_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_rev_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_INDEX_OFFSET_XFRM_HANDLER_REV_S0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_index_offset_fp_ing_cos_q_map_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_index_offset_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_fp_ing_cos_q_mapt_ipost_queue_assignment_cos_map_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = UC_COSf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_ING_COS_Q_MAPt_UC_COSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MC_COSf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_ING_COS_Q_MAPt_MC_COSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = RQE_Q_NUMf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 10,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_ING_COS_Q_MAPt_RQE_COSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CPU_COSf,
            .field_idx = 0,
            .minbit    = 11,
            .maxbit    = 16,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FP_ING_COS_Q_MAPt_CPU_COSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_fwd_s0_d0_x0 */
                .desc = &bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_fwd_s0_d0_x0_desc,
            },
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_rev_s0_d0_x0 */
                .desc = &bcm56880_a0_lta_bcmltx_index_offset_xfrm_handler_rev_s0_d0_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_lrd_bcmltx_fp_ing_cos_q_map_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmltx_fp_ing_cos_q_map_uc_q_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_LTA_BCMLTX_FP_ING_COS_Q_MAP_UC_Q_FV_HANDLER_ID
        }
    },
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_lta_bcmltx_fp_ing_cos_q_map_mc_q_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_LTA_BCMLTX_FP_ING_COS_Q_MAP_MC_Q_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_fp_ing_cos_q_map_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_QUEUE_ASSIGNMENT_COS_MAP_1m,
        },
        .entries = 6,
        .entry = bcm56880_a0_lrd_fp_ing_cos_q_mapt_ipost_queue_assignment_cos_map_1_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_bcmltx_fp_ing_cos_q_map_validate_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_fp_ing_cos_q_map_map = {
    .src_id = FP_ING_COS_Q_MAPt,
    .field_data = &bcm56880_a0_lrd_fp_ing_cos_q_map_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_lrd_fp_ing_cos_q_map_map_group,
    .table_attr = &bcm56880_a0_lrd_fp_ing_cos_q_mapt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};