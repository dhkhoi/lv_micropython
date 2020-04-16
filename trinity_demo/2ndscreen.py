import time
import lvgl as lv
lv.init()
import display
display.init()
from lvstm32 import lvstm32
from lvdisplay import lvdisplay
#set style of scr and text
style1= lv.style_t(lv.style_plain)
style1.text.font=lv.font_roboto_22
style1.body.main_color=lv.color_make(58, 240, 240)	
style1.body.grad_color=lv.color_make(0, 0, 0)
style1.text.color=lv.color_make(255,255,255)
#style of date
style2= lv.style_t(style1)
style2.text.font=lv.font_roboto_28
style2.text.color=lv.color_make(255,255,255)	#green	
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
style7.line.color = lv.color_make(255,255,255) # Arc color
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
label14.align(None,lv.ALIGN.CENTER,80,125)
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
lv.scr_load(scr)
while True:
	lvstm32()
	time.sleep(0.05)
