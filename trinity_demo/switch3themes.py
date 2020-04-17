import time
import lvgl as lv
lv.init()
import display
display.init()
from lvstm32 import lvstm32
from lvdisplay import lvdisplay
import touchscreen
touchscreen.init()

def event_handler1(obj, event):
    lv.scr_load(scr1)
def event_handler2(obj, event):
    lv.scr_load(scr)

#set style of scr and text
style1= lv.style_t(lv.style_plain)
style1.text.font=lv.font_roboto_22
style1.body.main_color=lv.color_make(58, 240, 240)	
style1.body.grad_color=lv.color_make(0, 0, 0)
style1.text.color=lv.color_make(255,255,255)
#style of date
style2= lv.style_t(style1)
style2.text.font=lv.font_roboto_28
style2.text.color=lv.color_make(255,255,255)	#white	
#style of step	
style3= lv.style_t(style1)
style3.text.font=lv.font_roboto_12
style3.text.color=lv.color_hex(0x009aff)	#blue	
#style of heart
style4= lv.style_t(style1)
style4.text.font=lv.font_roboto_12
style4.text.color=lv.color_hex(0xff0000)	#red
#style of calories
style5= lv.style_t(style1)
style5.text.font=lv.font_roboto_12
style5.text.color=lv.color_hex(0xff8900)	#orange
#style of white number
style6= lv.style_t(style1)
style6.text.font=lv.font_roboto_28
style6.text.color=lv.color_hex(0xffffff)	#white
#set style of arc
style7= lv.style_t(style1)
style7.line.color = lv.color_make(255,255,255) # Arc color white
style7.line.width = 2                      # Arc width
#create label
scr=lv.obj()
scr.set_style(style1)
label1=lv.label(scr)
label2=lv.label(scr)
label3=lv.label(scr)
label4=lv.label(scr)
label5=lv.label(scr)
label6=lv.label(scr)
label7=lv.label(scr)
label8=lv.label(scr)
label9=lv.label(scr)
label10=lv.label(scr)
label11=lv.label(scr)
label12=lv.label(scr)
label13=lv.label(scr)
label14=lv.label(scr)
#create arc
arc1 = lv.arc(scr)
arc2 = lv.arc(scr)
arc3 = lv.arc(scr)
#set style for label
lv.label.set_style(label1,0,style1)
lv.label.set_style(label2,0,style1)
lv.label.set_style(label3,0,style1)
lv.label.set_style(label4,0,style1)
lv.label.set_style(label5,0,style1)
lv.label.set_style(label6,0,style2)
lv.label.set_style(label7,0,style2)
lv.label.set_style(label8,0,style2)
lv.label.set_style(label9,0,style3)
lv.label.set_style(label10,0,style4)
lv.label.set_style(label11,0,style5)
lv.label.set_style(label12,0,style6)
lv.label.set_style(label13,0,style6)
lv.label.set_style(label14,0,style6)
#set style for arc
arc1.set_style(lv.arc.STYLE.MAIN, style7) 
arc2.set_style(lv.arc.STYLE.MAIN, style7) 
arc3.set_style(lv.arc.STYLE.MAIN, style7) 
#set label position
label1.align(None,lv.ALIGN.CENTER,-120,-30)
label2.align(None,lv.ALIGN.CENTER,-65,-30)
label3.align(None,lv.ALIGN.CENTER,-10,-30)
label4.align(None,lv.ALIGN.CENTER,15,-30)
label5.align(None,lv.ALIGN.CENTER,70,-30)
label6.align(None,lv.ALIGN.CENTER,-50,-120)
label7.align(None,lv.ALIGN.CENTER,-10,-90)
label8.align(None,lv.ALIGN.CENTER,-110,-120)
label9.align(None,lv.ALIGN.CENTER,-110,70)
label10.align(None,lv.ALIGN.CENTER,-10,70)
label11.align(None,lv.ALIGN.CENTER,90,70)
label12.align(None,lv.ALIGN.CENTER,-120,125)
label13.align(None,lv.ALIGN.CENTER,-10,125)
label14.align(None,lv.ALIGN.CENTER,75,125)
#set arc position
arc1.set_angles(0, 360)
arc1.set_size(60, 60)
arc1.align(None, lv.ALIGN.CENTER, -92, 70)
arc2.set_angles(0, 360)
arc2.set_size(60, 60)
arc2.align(None, lv.ALIGN.CENTER, 5, 70)
arc3.set_angles(0, 360)
arc3.set_size(60, 60)
arc3.align(None, lv.ALIGN.CENTER, 100, 70)
#add label's text
label1.set_text("1")
label2.set_text("6")
label3.set_text(":")
label4.set_text("2")
label5.set_text("9")
label6.set_text("Thu 16.04.20")
label8.set_text(lv.SYMBOL.BATTERY_3)
label9.set_text(lv.SYMBOL.STEP)
label10.set_text(lv.SYMBOL.HEART)
label11.set_text(lv.SYMBOL.CALORIES)
label12.set_text("2020")
label13.set_text("69")
label14.set_text("337")
#switch button
btn_sw1=lv.btn(scr)
btn_sw1.align(None,lv.ALIGN.CENTER,200,0)
btn_sw1.set_size(50,50)
btn_sw1.set_event_cb(event_handler1)

lv.scr_load(scr)

#theme 2

#color for button
style21= lv.style_t(lv.style_plain)
style21.text.font=lv.font_roboto_28
style21.body.main_color=lv.color_make(158, 158, 158)		
style21.body.grad_color=lv.color_make(158, 158, 158)	
style21.body.radius=lv.RADIUS.CIRCLE
style21.text.color=lv.color_make(0,0,0)
#color for background
style22= lv.style_t(style1)
style22.text.font=lv.font_roboto_28
style22.body.main_color=lv.color_make(0,0,0)
style22.body.grad_color=lv.color_make(0,0,0)
style22.text.color=lv.color_make(158, 158, 158)

scr1=lv.obj()
scr1.set_style(style22)
#button1
btn1=lv.btn(scr1)
btn1.set_style(lv.btn.STYLE.REL,style21)
btn1.align(None,lv.ALIGN.CENTER,0,-85)
btn1.set_size(100,100)
label1=lv.label(btn1)
label1.set_text(lv.SYMBOL.CALL)
#button2
btn2=lv.btn(scr1)
btn2.set_style(lv.btn.STYLE.REL,style21)
btn2.align(None,lv.ALIGN.CENTER,0,105)
btn2.set_size(100,100)
label2=lv.label(btn2)
label2.set_text(lv.SYMBOL.GPS)
#button3
btn3=lv.btn(scr1)
btn3.set_style(lv.btn.STYLE.REL,style21)
btn3.align(None,lv.ALIGN.CENTER,100,15)
btn3.set_size(100,100)
label3=lv.label(btn3)
label3.set_text(lv.SYMBOL.BELL)
#button4
btn4=lv.btn(scr1)
btn4.set_style(lv.btn.STYLE.REL,style21)
btn4.align(None,lv.ALIGN.CENTER,-100,15)
btn4.set_size(100,100)
label4=lv.label(btn4)
label4.set_text(lv.SYMBOL.WIFI)
#bluetooth,pin
label5=lv.label(scr1)
lv.label.set_style(label5,0,style22)
label5.set_text(lv.SYMBOL.BLUETOOTH)
label5.align(None,lv.ALIGN.CENTER,100,-137)

label6=lv.label(scr1)
lv.label.set_style(label6,0,style22)
label6.set_text(lv.SYMBOL.BATTERY_2)
label6.align(None,lv.ALIGN.CENTER,-100,-140)
#hour
label7=lv.label(scr1)
lv.label.set_style(label7,0,style22)
label7.set_text("22:15")
label7.align(None,lv.ALIGN.CENTER,0,-142)

#preloader
style23 = lv.style_t()
lv.style_copy(style, lv.style_plain)
style23.line.width = 10                         
style23.line.color = lv.color_make(112, 33, 52)      
style23.body.border.color = lv.color_make(158, 158, 158)
style23.body.border.width = 10
style23.body.padding.left = 0

# Create a Preloader object
preload = lv.preload(scr1)
preload.set_size(50, 50)
preload.align(None, lv.ALIGN.CENTER, 0, 25)
preload.set_style(lv.preload.STYLE.MAIN, style23)

#switch button
btn_sw2=lv.btn(scr1)
btn_sw2.align(None,lv.ALIGN.CENTER,-160,0)
btn_sw2.set_size(50,50)
btn_sw2.set_event_cb(event_handler2)
while True:
	lvstm32()
	time.sleep(0.001)
