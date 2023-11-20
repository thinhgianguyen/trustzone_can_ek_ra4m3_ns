/* generated HAL source file - do not edit */
#include "hal_data.h"
static const can_api_t g_can_nsc_api =
{ .open = g_can_open_guard,
  .close = g_can_close_guard,
  .write = g_can_write_guard,
  .read = g_can_read_guard,
  .modeTransition = g_can_mode_transition_guard,
  .infoGet = g_can_info_get_guard,
  .callbackSet = g_can_callback_set_guard, };
const can_instance_t g_can =
{ .p_api = &g_can_nsc_api, .p_ctrl = FSP_SECURE_ARGUMENT, .p_cfg = FSP_SECURE_ARGUMENT, };
void g_hal_init(void)
{
    g_common_init ();
}
