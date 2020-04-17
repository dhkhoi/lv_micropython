import time
import lvgl as lv
lv.init()
import display
display.init()
from lvstm32 import lvstm32
from lvdisplay import lvdisplay
scr=lv.obj()
#color for button
style1= lv.style_t(lv.style_plain)
style1.text.font=lv.font_roboto_28
style1.body.main_color=lv.color_make(158, 158, 158)		
style1.body.grad_color=lv.color_make(158, 158, 158)	
style1.body.radius=lv.RADIUS.CIRCLE
style1.text.color=lv.color_make(0,0,0)
#color for background
style2= lv.style_t(style1)
style2.text.font=lv.font_roboto_28
style2.body.main_color=lv.color_make(0,0,0)
style2.body.grad_color=lv.color_make(0,0,0)
style2.text.color=lv.color_make(158, 158, 158)

#button1
btn1=lv.btn(scr)
btn1.set_style(lv.btn.STYLE.REL,style1)
btn1.align(None,lv.ALIGN.CENTER,0,-85)
btn1.set_size(100,100)
label1=lv.label(btn1)
label1.set_text(lv.SYMBOL.CALL)
#button2
btn2=lv.btn(scr)
btn2.set_style(lv.btn.STYLE.REL,style1)
btn2.align(None,lv.ALIGN.CENTER,0,105)
btn2.set_size(100,100)
label2=lv.label(btn2)
label2.set_text(lv.SYMBOL.GPS)
#button3
btn3=lv.btn(scr)
btn3.set_style(lv.btn.STYLE.REL,style1)
btn3.align(None,lv.ALIGN.CENTER,100,15)
btn3.set_size(100,100)
label3=lv.label(btn3)
label3.set_text(lv.SYMBOL.BELL)
#button4
btn4=lv.btn(scr)
btn4.set_style(lv.btn.STYLE.REL,style1)
btn4.align(None,lv.ALIGN.CENTER,-100,15)
btn4.set_size(100,100)
label4=lv.label(btn4)
label4.set_text(lv.SYMBOL.WIFI)
#bluetooth,pin
label5=lv.label(scr)
lv.label.set_style(label5,0,style2)
label5.set_text(lv.SYMBOL.BLUETOOTH)
label5.align(None,lv.ALIGN.CENTER,100,-137)

label6=lv.label(scr)
lv.label.set_style(label6,0,style2)
label6.set_text(lv.SYMBOL.BATTERY_2)
label6.align(None,lv.ALIGN.CENTER,-100,-140)
#hour
label7=lv.label(scr)
lv.label.set_style(label7,0,style2)
label7.set_text("22:15")
label7.align(None,lv.ALIGN.CENTER,0,-142)

#preloader
style = lv.style_t()
lv.style_copy(style, lv.style_plain)
style.line.width = 10                         
style.line.color = lv.color_make(112, 33, 52)      
style.body.border.color = lv.color_make(158, 158, 158)
style.body.border.width = 10
style.body.padding.left = 0

# Create a Preloader object
preload = lv.preload(scr)
preload.set_size(50, 50)
preload.align(None, lv.ALIGN.CENTER, 0, 25)
preload.set_style(lv.preload.STYLE.MAIN, style)

lv.obj.set_style(scr,style2)
lv.scr_load(scr)
while True:
	lvstm32()
	time.sleep(0.005)
