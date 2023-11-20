/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_can.h"
#include "r_can_api.h"
FSP_HEADER
#define FSP_GUARD_g_can_R_CAN_Open() g_can_open_guard(FSP_SECURE_ARGUMENT, FSP_SECURE_ARGUMENT)

#define FSP_GUARD_g_can_R_CAN_Close() g_can_close_guard(FSP_SECURE_ARGUMENT)

#define FSP_GUARD_g_can_R_CAN_Write(mailbox, p_frame) g_can_write_guard(FSP_SECURE_ARGUMENT, mailbox, p_frame)

#define FSP_GUARD_g_can_R_CAN_Read(mailbox, p_frame) g_can_read_guard(FSP_SECURE_ARGUMENT, mailbox, p_frame)

#define FSP_GUARD_g_can_R_CAN_ModeTransition(operation_mode, test_mode) g_can_mode_transition_guard(FSP_SECURE_ARGUMENT, operation_mode, test_mode)

#define FSP_GUARD_g_can_R_CAN_InfoGet(p_info) g_can_info_get_guard(FSP_SECURE_ARGUMENT, p_info)

#define FSP_GUARD_g_can_R_CAN_CallbackSet(p_callback, p_context, p_callback_memory) g_can_callback_set_guard(FSP_SECURE_ARGUMENT, p_callback, p_context, p_callback_memory)

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_open_guard(can_ctrl_t *const p_api_ctrl, can_cfg_t const *const p_cfg);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_close_guard(can_ctrl_t *const p_api_ctrl);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_write_guard(can_ctrl_t *const p_api_ctrl, uint32_t mailbox,
        can_frame_t *const p_frame);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_read_guard(can_ctrl_t *const p_api_ctrl, uint32_t mailbox,
        can_frame_t *const p_frame);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_mode_transition_guard(can_ctrl_t *const p_api_ctrl,
        can_operation_mode_t operation_mode, can_test_mode_t test_mode);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_info_get_guard(can_ctrl_t *const p_api_ctrl, can_info_t *const p_info);

BSP_CMSE_NONSECURE_ENTRY fsp_err_t g_can_callback_set_guard(can_ctrl_t *const p_api_ctrl,
        void (*p_callback)(can_callback_args_t*), void const *const p_context,
        can_callback_args_t *const p_callback_memory);

extern const can_instance_t g_can;
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
