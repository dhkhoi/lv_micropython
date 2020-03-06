#Module for initializating the lvgl library, display; advancing tick count and 
#scheduling async event for lvgl on STM32.
#
#FOSSIL VIETNAM; Copyright (c) 2020 Trinity Team

import lvgl as lv
from lvstm32 import lvstm32
import display

class lvdisplay:
    def __init__(self):
        lv.init()
        disp_buf1 = lv.disp_buf_t()
        buf1_1 = bytearray(390*20)
        lv.disp_buf_init(disp_buf1,buf1_1, None, len(buf1_1)//4)
        disp_drv = lv.disp_drv_t()
        lv.disp_drv_init(disp_drv)
        disp_drv.buffer = disp_buf1
        disp_drv.flush_cb = display.flush
        disp_drv.hor_res = 390
        disp_drv.ver_res = 390
        lv.disp_drv_register(disp_drv)

lvdisplay()

