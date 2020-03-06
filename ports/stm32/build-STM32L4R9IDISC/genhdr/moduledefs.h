// Automatically generated by makemoduledefs.py.

#if (MODULE_LCD_ENABLED)
    extern const struct _mp_obj_module_t LCD_user_cmodule;
    #define MODULE_DEF_MP_QSTR_LCD { MP_ROM_QSTR(MP_QSTR_LCD), MP_ROM_PTR(&LCD_user_cmodule) },
#else
    #define MODULE_DEF_MP_QSTR_LCD
#endif

#if (MODULE_LED_ENABLED)
    extern const struct _mp_obj_module_t LED_user_cmodule;
    #define MODULE_DEF_MP_QSTR_LED { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&LED_user_cmodule) },
#else
    #define MODULE_DEF_MP_QSTR_LED
#endif

#if (MODULE_display_ENABLED)
    extern const struct _mp_obj_module_t display_user_cmodule;
    #define MODULE_DEF_MP_QSTR_DISPLAY { MP_ROM_QSTR(MP_QSTR_display), MP_ROM_PTR(&display_user_cmodule) },
#else
    #define MODULE_DEF_MP_QSTR_DISPLAY
#endif

#if (MICROPY_PY_ARRAY)
    extern const struct _mp_obj_module_t mp_module_uarray;
    #define MODULE_DEF_MP_QSTR_UARRAY { MP_ROM_QSTR(MP_QSTR_uarray), MP_ROM_PTR(&mp_module_uarray) },
#else
    #define MODULE_DEF_MP_QSTR_UARRAY
#endif


#define MICROPY_REGISTERED_MODULES \
    MODULE_DEF_MP_QSTR_LCD \
    MODULE_DEF_MP_QSTR_LED \
    MODULE_DEF_MP_QSTR_DISPLAY \
    MODULE_DEF_MP_QSTR_UARRAY \
// MICROPY_REGISTERED_MODULES