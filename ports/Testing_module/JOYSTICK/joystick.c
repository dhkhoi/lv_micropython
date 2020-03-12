#include "../../../py/obj.h"
#include "../../../py/runtime.h"
#include "../../../py/builtin.h"
#include "../../../lib/lv_bindings/driver/include/common.h"
#include "mainjoy.c"



//////////////////////////////////////////////////////////////////////////////


STATIC mp_obj_t mp_joystick_init(void)
{

	joy_init();

	return mp_const_none;
}

STATIC mp_obj_t mp_mfx_event(void)
{

	Mfx_Event();

	return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_joystick_init_obj, mp_joystick_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_joystick_mfx_event_obj, mp_mfx_event);
DEFINE_PTR_OBJ(button_read);

STATIC const mp_rom_map_elem_t joystick_globals_table[] = {
	{ MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_joystick) },
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_joystick_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_mfx_event), MP_ROM_PTR(&mp_joystick_mfx_event_obj) },
	{ MP_ROM_QSTR(MP_QSTR_read_cb), MP_ROM_PTR(&PTR_OBJ(button_read)) },
};

STATIC MP_DEFINE_CONST_DICT (
	mp_module_joystick_globals,
	joystick_globals_table
);

const mp_obj_module_t joystick_user_cmodule = {
	.base = {&mp_type_module},
	.globals = (mp_obj_dict_t*)&mp_module_joystick_globals,
};

MP_REGISTER_MODULE(MP_QSTR_joystick, joystick_user_cmodule, MODULE_joystick_ENABLED);
