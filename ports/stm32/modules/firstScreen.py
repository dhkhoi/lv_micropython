import lvgl as lv
from lvstm32 import lvstm32
import display

class firstScreen:
    def __init__(self):
        lv.init()
	display.init()
        disp_buf1 = lv.disp_buf_t()
        buf1_1 = bytearray(390*32)
        lv.disp_buf_init(disp_buf1,buf1_1, None, len(buf1_1)//4)
        disp_drv = lv.disp_drv_t()
        lv.disp_drv_init(disp_drv)
        disp_drv.buffer = disp_buf1
        disp_drv.flush_cb = display.flush
        disp_drv.hor_res = 390
        disp_drv.ver_res = 390
        lv.disp_drv_register(disp_drv)

	scr = lv.obj()

	#create a button (1st figure of hour)
	btn_1sthour = lv.btn(scr)
	btn_1sthour.align(lv.scr_act(), lv.ALIGN.CENTER, -110, -20)
	btn_1sthour.set_size(60, 100)
	label_1sthour = lv.label(btn_1sthour)
	label_1sthour.set_text("1")   

	#create another button (2nd figure of minute)
	btn_2ndmin = lv.btn(scr)
	btn_2ndmin.align(lv.scr_act(), lv.ALIGN.CENTER, 145, -20)
	btn_2ndmin.set_size(60, 100)
	label_2ndmin = lv.label(btn_2ndmin)
	label_2ndmin.set_text("6") 

	#create another button (1st figure of minute)
	btn_1stmin = lv.btn(scr)
	btn_1stmin.align(lv.scr_act(), lv.ALIGN.CENTER, 77, -20)
	btn_1stmin.set_size(60, 100)
	label_1stmin = lv.label(btn_1stmin)
	label_1stmin.set_text("2") 

	#create another button (2nd figure of hour)
	btn_2ndhour = lv.btn(scr)
	btn_2ndhour.align(lv.scr_act(), lv.ALIGN.CENTER, -45, -20)
	btn_2ndhour.set_size(60, 100)
	label_2ndhour = lv.label(btn_2ndhour)
	label_2ndhour.set_text("9") 

	#create another button (":" sign)
	btn_spr = lv.btn(scr)
	btn_spr.align(lv.scr_act(), lv.ALIGN.CENTER, 33, -20)
	btn_spr.set_size(30, 100)
	label_spr = lv.label(btn_spr)
	label_spr.set_size(30, 100)
	label_spr.set_text(":") 

	#create another button (day)
	btn_day = lv.btn(scr)
	btn_day.align(lv.scr_act(), lv.ALIGN.CENTER, -7, -135)
	btn_day.set_size(50, 50)
	label_day = lv.label(btn_day)
	label_day.set_text("06") 

	#create another button (month)
	btn_month = lv.btn(scr)
	btn_month.align(lv.scr_act(), lv.ALIGN.CENTER, 45, -135)
	btn_month.set_size(50, 24)
	label_month = lv.label(btn_month)
	label_month.set_text("3") 

	#create another button (year)
	btn_year = lv.btn(scr)
	btn_year.align(lv.scr_act(), lv.ALIGN.CENTER, 45, -107)
	btn_year.set_size(50, 24)	
	label_year = lv.label(btn_year)
	label_year.set_text("2020")

	#create container for "FOSSIL"
	cont_fs = lv.cont(scr)
	cont_fs.set_auto_realign(True)                    # Auto realign when the size changes
	cont_fs.align(lv.scr_act(), lv.ALIGN.CENTER, 0, 93)  # This parametrs will be sued when realigned
	cont_fs.set_size(100, 40)
	cont_fs.set_fit(lv.FIT.NONE)
	cont_fs.set_layout(lv.LAYOUT.OFF)

	label_fs = lv.label(cont_fs)
	label_fs.set_text("FOSSIL")
	label_fs.align(None, lv.ALIGN.CENTER, 0, 0)

	#create container for "Trinity"
	cont_t = lv.cont(scr)
	cont_t.set_auto_realign(True)                    # Auto realign when the size changes
	cont_t.align(lv.scr_act(), lv.ALIGN.CENTER, 0, 142)  # This parametrs will be sued when realigned
	cont_t.set_size(70, 40)
	cont_t.set_fit(lv.FIT.NONE)
	cont_t.set_layout(lv.LAYOUT.OFF)

	label_t = lv.label(cont_t)
	label_t.set_text("Trinity")
	label_t.align(None, lv.ALIGN.CENTER, 0, 0)

	# Create style for the Arcs
	style = lv.style_t()
	lv.style_copy(style, lv.style_plain)
	style.line.color = lv.color_make(119,158,203) # Arc color
	style.line.width = 8                      # Arc width

	# Create an Arc
	arc = lv.arc(scr)
	arc.set_style(lv.arc.STYLE.MAIN, style)   # Use the new style
	arc.set_angles(45, 0)
	arc.set_size(380, 380)
	arc.align(None, lv.ALIGN.CENTER, 0, 0)


	lv.scr_load(scr)

	display.refresh()

firstScreen()
