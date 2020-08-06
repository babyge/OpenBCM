/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtrunk/bcmltx_trunk_sys_grp_failover_entry_add.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_src_list_s0 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_list_d0 = {
    .field_num = 10,
    .field_array = bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_transform_src_s0[2] = {
    TRUNK_SYSTEM_FAILOVERt_FAILOVER_CNTf,
    TRUNK_SYSTEM_FAILOVERt_FAILOVER_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_transform_dst_d0[10] = {
    BCMLRD_FIELD_INDEX,
    FAILOVER_LAG_SIZEf,
    PORT0f,
    PORT1f,
    PORT2f,
    PORT3f,
    PORT4f,
    PORT5f,
    PORT6f,
    PORT7f,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_comp_data = {
    .sid       = TRUNK_SYSTEM_FAILOVERt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_src_list_s0,
    .rfields     = 10,
    .rfield      = bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 10,
    .field       = bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_transform_dst_d0,
    .field_list  = &bcm56780_a0_lrd_bcmltx_trunk_sys_grp_failover_entry_add_trunk_system_failover_dst_list_d0,
    .rfields     = 2,
    .rfield      = bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_transform_src_s0,
    .rfield_list = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_src_list_s0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_trunk_sys_grp_failover_entry_add_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_trunk_sys_grp_failover_entry_add_rev_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_trunk_sys_grp_failover_entry_add_xfrm_handler_rev_arg_s0_d0
};

