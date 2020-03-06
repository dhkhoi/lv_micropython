#include "../../../py/obj.h"
#include "../../../py/runtime.h"
#include "../../../py/builtin.h"
#include "../../../lib/lv_bindings/driver/include/common.h"
#include "display.c"



//////////////////////////////////////////////////////////////////////////////


STATIC mp_obj_t mp_display_init(void)
{

	LCD_init();

	return mp_const_none;
}

STATIC mp_obj_t mp_display_deinit(void)
{
	LCD_deinit();

	return mp_const_none;
}

STATIC mp_obj_t mp_display_refresh(void)
{
	LCD_refresh();

	return mp_const_none;
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_display_init_obj, mp_display_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_display_deinit_obj, mp_display_deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_display_refresh_obj, mp_display_refresh);

DEFINE_PTR_OBJ(my_flush_cb);

STATIC const mp_rom_map_elem_t display_globals_table[] = {
	{ MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_display) },
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_display_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&mp_display_deinit_obj) },
	{ MP_ROM_QSTR(MP_QSTR_refresh), MP_ROM_PTR(&mp_display_refresh_obj) },
	{ MP_ROM_QSTR(MP_QSTR_flush), MP_ROM_PTR(&PTR_OBJ(my_flush_cb)) },
};

STATIC MP_DEFINE_CONST_DICT (
	mp_module_display_globals,
	display_globals_table
);

const mp_obj_module_t display_user_cmodule = {
	.base = {&mp_type_module},
	.globals = (mp_obj_dict_t*)&mp_module_display_globals,
};

MP_REGISTER_MODULE(MP_QSTR_display, display_user_cmodule, MODULE_display_ENABLED);
