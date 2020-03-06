#include "../../../py/obj.h"
#include "../../../py/runtime.h"
#include "../../../py/nlr.h"
#include "../../../py/binary.h"
#include "portmodules.h"
#include "MyLCD.c"

STATIC mp_obj_t mp_LCD_init(void)
{
LCD_Init();
 return mp_const_none;
}

STATIC mp_obj_t mp_LCD_deinit(void)
{
LCD_Deinit();
return mp_const_none;
}

STATIC mp_obj_t mp_LCD_refresh(void)
{
LCD_Refresh();
return mp_const_none;
}
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_LCD_init_obj, mp_LCD_init);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_LCD_deinit_obj, mp_LCD_deinit);
STATIC MP_DEFINE_CONST_FUN_OBJ_0(mp_LCD_refresh_obj, mp_LCD_refresh);
STATIC const mp_rom_map_elem_t LCD_module_globals_table[] = {
	{ MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_LCD) },
	{ MP_ROM_QSTR(MP_QSTR_init), MP_ROM_PTR(&mp_LCD_init_obj) },
	{ MP_ROM_QSTR(MP_QSTR_deinit), MP_ROM_PTR(&mp_LCD_deinit_obj)},
	{ MP_ROM_QSTR(MP_QSTR_refresh), MP_ROM_PTR(&mp_LCD_refresh_obj)},
};

STATIC MP_DEFINE_CONST_DICT(LCD_module_globals, LCD_module_globals_table);

const mp_obj_module_t LCD_user_cmodule = {
	.base = { &mp_type_module},
	.globals = (mp_obj_dict_t*)&LCD_module_globals,
};

MP_REGISTER_MODULE(MP_QSTR_LCD, LCD_user_cmodule, MODULE_LCD_ENABLED);

