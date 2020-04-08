import lvgl as lv
lv.init()
from lvstm32 import lvstm32
import display
display.init()
class thirdScreen:
    def __init__(self):

	scr = lv.obj()

	# Create style for the Arcs - Hour
	styleHour = lv.style_t()
	lv.style_copy(styleHour, lv.style_plain)
	styleHour.line.color = lv.color_make(119,158,203) # Arc color
	styleHour.line.width = 8                      # Arc width

	# Create an Arc - Hour
	arcHour = lv.arc(scr)
	arcHour.set_style(lv.arc.STYLE.MAIN, styleHour)   # Use the new style
	arcHour.set_angles(45, 0)
	arcHour.set_size(300, 300)
	arcHour.align(None, lv.ALIGN.CENTER, 0, 0)

	# Create style for the Arcs - Minute
	styleMin = lv.style_t()
	lv.style_copy(styleMin, lv.style_plain)
	styleMin.line.color = lv.color_make(124,252,0) # Arc color
	styleMin.line.width = 8                      # Arc width

	# Create an Arc - Minute
	arcMin = lv.arc(scr)
	arcMin.set_style(lv.arc.STYLE.MAIN, styleMin)   # Use the new style
	arcMin.set_angles(45, 0)
	arcMin.set_size(380, 380)
	arcMin.align(None, lv.ALIGN.CENTER, 0, 0)

	# Create style for the Arcs - Second
	styleSecond = lv.style_t()
	lv.style_copy(styleSecond, lv.style_plain)
	styleSecond.line.color = lv.color_make(250,128,114) # Arc color
	styleSecond.line.width = 8                      # Arc width

	# Create an Arc - Minute
	arcSecond = lv.arc(scr)
	arcSecond.set_style(lv.arc.STYLE.MAIN, styleSecond)   # Use the new style
	arcSecond.set_angles(45, 0)
	arcSecond.set_size(220, 220)
	arcSecond.align(None, lv.ALIGN.CENTER, 0, 0)

	def event_handler(obj, event):
		lv.obj_del(scr)
		from secondScreen import secondScreen

	btn1 = lv.btn(scr)
	btn1.set_event_cb(event_handler)
	btn1.align(None, lv.ALIGN.CENTER, 0, 0)
	label = lv.label(btn1)
	label.set_text("Button")

	lv.scr_load(scr)

thirdScreen()
