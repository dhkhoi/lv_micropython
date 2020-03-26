t=lv.color_make(0x00, 0x00, 0x00)
s=lv.color_make(0x80, 0x80, 0x80)
g= lv.style_t()
lv.style_copy(g,lv.style_plain_color)
g.body.main_color=t
g.body.grad_color=s
lv.obj.set_style(scr,g)
