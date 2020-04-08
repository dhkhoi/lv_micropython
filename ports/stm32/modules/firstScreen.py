import lvgl as lv
lv.init()
from lvstm32 import lvstm32
import display
display.init()
class firstScreen:
    def __init__(self):
	def event_handler1(obj, event):
	    lv.scr_load(scr1)
   	def event_handler2(obj, event):
   		lv.scr_load(scr2)
	def event_handler3(obj, event):  
	    lv.scr_load(scr)
	# Create a list
	scr=lv.obj()
	list1 = lv.list(scr)
	list1.set_size(160, 200)
	list1.align(None, lv.ALIGN.CENTER, 0, 0)

	# Add buttons to the list

	list_btn = list1.add_btn(lv.SYMBOL.BLUETOOTH, "BT")
	list_btn.set_event_cb(event_handler1)
	list_btn = list1.add_btn(lv.SYMBOL.WIFI, "WF")
	list_btn.set_event_cb(event_handler2)
	lv.scr_load(scr)

	scr1=lv.obj()
	list1 = lv.list(scr1)
	list1.set_size(160, 200)
	list1.align(None, lv.ALIGN.CENTER, 0, 0)

	# Add buttons to the list

	list_btn = list1.add_btn(lv.SYMBOL.BLUETOOTH, "111")
	list_btn.set_event_cb(event_handler3)
	list_btn = list1.add_btn(lv.SYMBOL.WIFI, "222")	
	scr2=lv.obj()
	list1 = lv.list(scr2)
	list1.set_size(160, 200)
	list1.align(None, lv.ALIGN.CENTER, 0, 0)

	# Add buttons to the list
	list_btn = list1.add_btn(lv.SYMBOL.BLUETOOTH, "3333")
	list_btn.set_event_cb(event_handler3)
	list_btn = list1.add_btn(lv.SYMBOL.WIFI, "4444")

firstScreen()
