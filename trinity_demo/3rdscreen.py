import time
import lvgl as lv
lv.init()
import display
display.init()
from lvstm32 import lvstm32
from lvdisplay import lvdisplay
scr=lv.obj()
btn1=lv.btn(scr)
line_points1 = [ {"x":60, "y":140}, 
                {"x":0, "y":60}, 
               ]
line_points2 = [ {"x":60, "y":140}, 
                {"x":120, "y":15}, 
               ]
#4 indexes follow clock-counter
line_points3 = [ {"x":50, "y":0}, 
                {"x":50, "y":20}, 
               ]
line_points4 = [ {"x":220, "y":150}, 
                {"x":240, "y":150}, 
               ]
line_points5 = [ {"x":50, "y":324}, 
                {"x":50, "y":347}, 
               ]
line_points6 = [ {"x":0, "y":150}, 
                {"x":20, "y":150}, 
               ]
#set style of scr and text
style1= lv.style_t(lv.style_plain)
style1.text.font=lv.font_roboto_12
style1.body.main_color=lv.color_make(0,0,0)	
style1.body.grad_color=lv.color_make(150,150,150)	
style1.body.radius=lv.RADIUS.CIRCLE
style1.text.color=lv.color_make(255,229,59)
style1.body.border.color = lv.color_make(227,227,227)
style1.body.border.width = 2
style1.body.padding.left = 0
#style of date
style2= lv.style_t(style1)
style2.text.font=lv.font_roboto_28
style2.text.color=lv.color_make(255,255,255)
#set style of arc
style7= lv.style_t(style1)
style7.line.color = lv.color_make(227,227,227) # Arc color
style7.line.width = 2                      # Arc width	
#set style of arc
style8= lv.style_t(style1)
style8.line.color = lv.color_make(255,126,28) # Arc color
style8.line.width = 4                      # Arc width	
# Create new hour style (thick dark blue)
style_line1 = lv.style_t(style1)
style_line1.line.color = lv.color_make(255,140,140)
style_line1.line.width = 8
style_line1.line.rounded = 4
# Create new minute style (thick dark blue)
style_line2 = lv.style_t(style1)
style_line2.line.color = lv.color_make(227,227,227)
style_line2.line.width = 6
style_line2.line.rounded = 4
# Create new index style (thick dark blue)
style_line3 = lv.style_t(style1)
style_line3.line.color = lv.color_hex(0xffffff)
style_line3.line.width = 4
style_line3.line.rounded = 2

scr.set_style(style1)
# Copy the previous line and apply the new style
line1 = lv.line(scr)
line1.align(None, lv.ALIGN.CENTER, -20, -100)
line1.set_points(line_points1, len(line_points1))      # Set the points
line1.set_style(lv.line.STYLE.MAIN, style_line1)
# Copy the previous line and apply the new style
line2 = lv.line(scr)
line2.align(None, lv.ALIGN.CENTER, 0, -100)
line2.set_points(line_points2, len(line_points2))      # Set the points
line2.set_style(lv.line.STYLE.MAIN, style_line2)
# Copy the previous line and apply the new style
line3 = lv.line(scr)
line3.align(None, lv.ALIGN.CENTER, 0, -140)
line3.set_points(line_points3, len(line_points3))      # Set the points
line3.set_style(lv.line.STYLE.MAIN, style_line3)
# Copy the previous line and apply the new style
line4 = lv.line(scr)
line4.align(None, lv.ALIGN.CENTER, 0, -100)
line4.set_points(line_points4, len(line_points4))      # Set the points
line4.set_style(lv.line.STYLE.MAIN, style_line3)
# Copy the previous line and apply the new style
line5 = lv.line(scr)
line5.align(None, lv.ALIGN.CENTER, 0, -100)
line5.set_points(line_points5, len(line_points5))      # Set the points
line5.set_style(lv.line.STYLE.MAIN, style_line3)
# Copy the previous line and apply the new style
line6 = lv.line(scr)
line6.align(None, lv.ALIGN.CENTER, -140, -100)
line6.set_points(line_points6, len(line_points6))      # Set the points
line6.set_style(lv.line.STYLE.MAIN, style_line3)

#Date module
label1=lv.label(scr)
lv.label.set_style(label1,0,style2)
label1.align(None,lv.ALIGN.CENTER,80,-10)
label1.set_text("15")

label2=lv.label(scr)
lv.label.set_style(label2,0,style2)
label2.align(None,lv.ALIGN.CENTER,75,20)
label2.set_text("Apr")

arc1 = lv.arc(scr)
arc1.set_style(lv.arc.STYLE.MAIN, style7) 
arc1.set_angles(0, 360)
arc1.set_size(110,110)
arc1.align(None, lv.ALIGN.CENTER, 95,5)

#Battery module
label3=lv.label(scr)
lv.label.set_style(label3,0,style2)
label3.align(None,lv.ALIGN.CENTER,-114,-10)
label3.set_text(lv.SYMBOL.BATTERY_3)

label4=lv.label(scr)
lv.label.set_style(label4,0,style2)
label4.align(None,lv.ALIGN.CENTER,-118,20)
label4.set_text("67%")

arc2 = lv.arc(scr)
arc2.set_style(lv.arc.STYLE.MAIN, style7) 
arc2.set_angles(0, 360)
arc2.set_size(110,110)
arc2.align(None, lv.ALIGN.CENTER, -95,5)

arc3 = lv.arc(scr)
arc3.set_style(lv.arc.STYLE.MAIN, style8) 
arc3.set_angles(180, 60)
arc3.set_size(100,100)
arc3.align(None, lv.ALIGN.CENTER, -95,5)


btn1.set_style(lv.btn.STYLE.REL,style1)
btn1.set_style(lv.btn.STYLE.PR,style1)
btn1.align(None,lv.ALIGN.CENTER,-47,113)
btn1.set_size(190,70)

label5=lv.label(scr)
lv.label.set_style(label5,0,style1)
label5.align(None,lv.ALIGN.CENTER,-80,117)
label5.set_text(lv.SYMBOL.WEATHER)

label6=lv.label(scr)
lv.label.set_style(label6,0,style2)
label6.align(None,lv.ALIGN.CENTER,-40,102)
label6.set_text("Da Nang")

label7=lv.label(scr)
lv.label.set_style(label7,0,style2)
label7.align(None,lv.ALIGN.CENTER,-40,131)
label7.set_text("Sunny")

#set style of arc
style3=lv.style_t(style1)
style3.line.width = 6                          
style3.line.color = lv.color_make(235, 73, 140)     
style3.body.border.color = lv.color_make(255,255,255)
style3.body.border.width = 6
style3.body.padding.left = 0
# Create a Preloader object
preload = lv.preload(scr)
preload.set_size(30, 30)
preload.align(None, lv.ALIGN.CENTER, 0, 10)
preload.set_style(lv.preload.STYLE.MAIN, style3)

lv.scr_load(scr)
while True:
	lvstm32()
	time.sleep(0.005)
