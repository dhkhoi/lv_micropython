import lvgl as lv
from lvstm32 import lvstm32
import display

class secondScreen:
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

	#############################create a gauge#################################
	# Create a style
	style = lv.style_t()
	lv.style_copy(style, lv.style_pretty_color)
	style.body.main_color = lv.color_hex3(0x666)     # Line color at the beginning
	style.body.grad_color =  lv.color_hex3(0x666)    # Line color at the end
	style.body.padding.left = 10                     # Scale line length
	style.body.padding.inner = 8                     # Scale label padding
	style.body.border.color = lv.color_hex3(0x333)   # Needle middle circle color
	style.line.width = 3
	style.text.color = lv.color_hex3(0x333)
	style.line.color = lv.color_hex3(0xF00)          # Line color after the critical value

	# Describe the color for the needles
	needle_colors = [
    	lv.color_make(0x00, 0x00, 0xFF),
    	lv.color_make(0xFF, 0xA5, 0x00),
    	lv.color_make(0x80, 0x00, 0x80)
	]

	# Create a gauge
	gauge1 = lv.gauge(scr)
	gauge1.set_style(lv.gauge.STYLE.MAIN, style)
	gauge1.set_needle_count(len(needle_colors), needle_colors)
	gauge1.set_size(200, 200)
	gauge1.align(None, lv.ALIGN.CENTER, 0, -50)

	# Set the values
	gauge1.set_value(0, 10)
	gauge1.set_value(1, 20)
	gauge1.set_value(2, 30)


	#################################explanation of needle############################
	# Create a style for the LED

	#color for LED 1
	style_led1 = lv.style_t()
	lv.style_copy(style_led1, lv.style_pretty_color)
	style_led1.body.radius = 800 # large enough to draw a circle
	style_led1.body.main_color = lv.color_make(0x00, 0x00, 0xFF)
	style_led1.body.border.width = 3
	style_led1.body.border.opa = lv.OPA._30
	style_led1.body.shadow.width = 5

	# Create a LED 1
	led1  = lv.led(scr)
	led1.set_style(lv.led.STYLE.MAIN, style_led1)
	led1.align(None, lv.ALIGN.CENTER, -40, 40)
	led1.on()

	btnLED1 = lv.btn(scr)
	btnLED1.align(lv.scr_act(), lv.ALIGN.CENTER, 30, 60)
	btnLED1.set_size(70, 30)
	labelLED1 = lv.label(btnLED1)
	labelLED1.set_text("Battery") 

	#color for LED 2
	style_led2 = lv.style_t()
	lv.style_copy(style_led2, lv.style_pretty_color)
	style_led2.body.radius = 800 # large enough to draw a circle
	style_led2.body.main_color = lv.color_make(0xFF, 0xA5, 0x00)
	style_led2.body.border.width = 3
	style_led2.body.border.opa = lv.OPA._30
	style_led2.body.shadow.width = 5

	# Create a LED 2
	led2  = lv.led(scr)
	led2.set_style(lv.led.STYLE.MAIN, style_led2)
	led2.align(None, lv.ALIGN.CENTER, -40, 85)
	led2.on()

	btnLED2 = lv.btn(scr)
	btnLED2.align(lv.scr_act(), lv.ALIGN.CENTER, 30, 105)
	btnLED2.set_size(70, 30)
	labelLED2 = lv.label(btnLED2)
	labelLED2.set_text("Memory") 

	#color for LED 3
	style_led3 = lv.style_t()
	lv.style_copy(style_led3, lv.style_pretty_color)
	style_led3.body.radius = 800 # large enough to draw a circle
	style_led3.body.main_color = lv.color_make(0x80, 0x00, 0x80)
	style_led3.body.border.width = 3
	style_led3.body.border.opa = lv.OPA._30
	style_led3.body.shadow.width = 5

	# Create a LED 3
	led3  = lv.led(scr)
	led3.set_style(lv.led.STYLE.MAIN, style_led3)
	led3.align(None, lv.ALIGN.CENTER, -40, 130)
	led3.on()

	btnLED3 = lv.btn(scr)
	btnLED3.align(lv.scr_act(), lv.ALIGN.CENTER, 30, 150)
	btnLED3.set_size(70, 30)
	labelLED3 = lv.label(btnLED3)	
	labelLED3.set_text("RAM") 

	lv.scr_load(scr)

	display.refresh()

secondScreen()
