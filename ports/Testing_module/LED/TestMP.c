#include "../../../py/obj.h"
#include "../../../py/runtime.h"
#include "module.c"

STATIC mp_obj_t mp_LED_Init(mp_obj_t led)
{
int t = mp_obj_get_int(led);
LED_init(t);

return mp_const_none;
}

STATIC mp_obj_t mp_LED_On(mp_obj_t time)
{
int t = mp_obj_get_int(time);
LED_on(t);

return mp_const_none;
}


STATIC MP_DEFINE_CONST_FUN_OBJ_1(mp_LED_Init_obj, mp_LED_Init);
STATIC MP_DEFINE_CONST_FUN_OBJ_1(mp_LED_On_obj, mp_LED_On);

STATIC const mp_rom_map_elem_t LED_module_globals_table[] = {
	{ MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_LED) },
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_LED_Init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_on), MP_ROM_PTR(&mp_LED_On_obj) },
};

STATIC MP_DEFINE_CONST_DICT(LED_module_globals, LED_module_globals_table);

const mp_obj_module_t LED_user_cmodule = {
	.base = { &mp_type_module },
	.globals = (mp_obj_dict_t*)&LED_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_LED, LED_user_cmodule, MODULE_LED_ENABLED);
