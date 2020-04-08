import time
import lvgl as lv
lv.init()
import display
display.init()
from lvstm32 import lvstm32
from lvdisplay import lvdisplay
scr=lv.obj()

t=lv.color_make(0x00, 0x00, 0x00)
s=lv.color_make(0x80, 0x80, 0x80)
#color for button
g= lv.style_t()
lv.style_copy(g,lv.style_plain)
g.text.font=lv.font_roboto_28
g.body.main_color=s
g.body.grad_color=s
g.body.radius=lv.RADIUS.CIRCLE
#color for background
a= lv.style_t()
lv.style_copy(a,lv.style_plain_color)
a.text.font=lv.font_roboto_28
a.body.main_color=t
a.body.grad_color=t
#button1
btn1=lv.btn(scr)
btn1.set_style(lv.btn.STYLE.REL,g)
btn1.align(None,lv.ALIGN.CENTER,0,-100)
btn1.set_size(100,100)
label1=lv.label(btn1)
label1.set_text(lv.SYMBOL.CALL)
#button2
btn2=lv.btn(scr)
btn2.set_style(lv.btn.STYLE.REL,g)
btn2.align(None,lv.ALIGN.CENTER,0,90)
btn2.set_size(100,100)
label2=lv.label(btn2)
label2.set_text(lv.SYMBOL.GPS)
#button3
btn3=lv.btn(scr)
btn3.set_style(lv.btn.STYLE.REL,g)
btn3.align(None,lv.ALIGN.CENTER,100,0)
btn3.set_size(100,100)
label3=lv.label(btn3)
label3.set_text(lv.SYMBOL.BELL)
#button4
btn4=lv.btn(scr)
btn4.set_style(lv.btn.STYLE.REL,g)
btn4.align(None,lv.ALIGN.CENTER,-100,0)
btn4.set_size(100,100)
label4=lv.label(btn4)
label4.set_text(lv.SYMBOL.WIFI)
#bluetooth,pin
btn5=lv.btn(scr)
btn5.set_style(lv.btn.STYLE.REL,a)
btn5.align(None,lv.ALIGN.CENTER,150,-115)
btn5.set_size(15,30)
label5=lv.label(btn5)
label5.set_text(lv.SYMBOL.BLUETOOTH)

btn6=lv.btn(scr)
btn6.set_style(lv.btn.STYLE.REL,a)
btn6.align(None,lv.ALIGN.CENTER,-70,-115)
btn6.set_size(30,20)
label6=lv.label(btn6)
label6.set_text(lv.SYMBOL.BATTERY_2)
#preloader
style = lv.style_t()
lv.style_copy(style, lv.style_plain)
style.line.width = 10                          # 10 px thick arc
style.line.color = lv.color_hex3(0x258)        # Blueish arc color

style.body.border.color = s # Gray background color
style.body.border.width = 10
style.body.padding.left = 0

# Create a Preloader object
preload = lv.preload(scr)
preload.set_size(50, 50)
preload.align(None, lv.ALIGN.CENTER, 0, 10)
preload.set_style(lv.preload.STYLE.MAIN, style)

lv.obj.set_style(scr,a)
lv.scr_load(scr)
while True:
	lvstm32()
	time.sleep(0.005)
