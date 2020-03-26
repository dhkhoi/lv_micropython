#include "../../../py/obj.h"
#include "../../../py/runtime.h"
#include "../../../py/builtin.h"
#include "../../../lib/lv_bindings/driver/include/common.h"
#include "maintouch.c"



//////////////////////////////////////////////////////////////////////////////


STATIC mp_obj_t mp_touchscreen_init(void)
{

	touchscreen_init();

	return mp_const_none;
}


STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_touchscreen_init_obj, mp_touchscreen_init);
DEFINE_PTR_OBJ(touchpad_read);

STATIC const mp_rom_map_elem_t touchscreen_globals_table[] = {
	{ MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_touchscreen) },
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_touchscreen_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_touchscreen_read), MP_ROM_PTR(&PTR_OBJ(touchpad_read)) },
};

STATIC MP_DEFINE_CONST_DICT (
	mp_module_touchscreen_globals,
	touchscreen_globals_table
);

const mp_obj_module_t touchscreen_user_cmodule = {
	.base = {&mp_type_module},
	.globals = (mp_obj_dict_t*)&mp_module_touchscreen_globals,
};

MP_REGISTER_MODULE(MP_QSTR_touchscreen, touchscreen_user_cmodule, MODULE_touchscreen_ENABLED);
