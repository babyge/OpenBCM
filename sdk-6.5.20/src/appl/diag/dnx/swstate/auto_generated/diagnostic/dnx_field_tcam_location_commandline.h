/** \file dnx/swstate/auto_generated/diagnostic/dnx_field_tcam_location_commandline.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_FIELD_TCAM_LOCATION_COMMANDLINE_H__
#define __DNX_FIELD_TCAM_LOCATION_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_location_types.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#include <soc/dnxc/swstate/types/sw_state_occupation_bitmap.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_bank_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_dump_man;
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_size_get_man;
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_entries_occupation_bitmap_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_handlers_info_priorities_range_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_location_priority_arr_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_location_priority_arr_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_location_priority_arr_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_location_priority_arr_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_location_priority_arr_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_location_priority_arr_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_man;
extern const char cmd_dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_desc[];
shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_size_get_man;


shr_error_e sh_dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_field_tcam_location_tcam_banks_occupation_bitmap_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_FIELD_TCAM_LOCATION_COMMANDLINE_H__ */