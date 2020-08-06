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
/* Logical Table Adaptor for component bcmtm */
/* Handler: bcm56880_a0_lta_bcmtm_tm_oobfc_info_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmtm/oobfc/bcmtm_lt_oobfc_info.h>



const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmtm_tm_oobfc_info_cth_handler_arg = {
    .sid = TM_OOBFC_INFOt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56880_a0_lta_bcmtm_tm_oobfc_info_cth_handler = {
    .validate = bcmtm_lt_oobfc_info_validate,
    .op_insert       = bcmtm_lt_oobfc_info_insert,
    .op_lookup       = bcmtm_lt_oobfc_info_lookup,
    .op_delete       = bcmtm_lt_oobfc_info_delete,
    .op_update       = bcmtm_lt_oobfc_info_update,
    .op_first        = bcmtm_lt_oobfc_info_first,
    .op_next         = bcmtm_lt_oobfc_info_next,
    .ha       = NULL,
    .arg      = &bcm56880_a0_lta_bcmtm_tm_oobfc_info_cth_handler_arg
};
