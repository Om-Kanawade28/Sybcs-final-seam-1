import turtle as t    
def drow(side,color,size):
    angle = 360/side
    t.fillcolor(color)
    t.begin_fill()
    for i in range(side):
        t.forward(size)
        t.left(angle)
    t.end_fill()
    
drow(3,"red",100)
t.penup()
t.forward(100)
t.pendown()
drow(4,"green",100)
t.penup()
t.forward(150)
t.pendown()
drow(5,"blue",100)
t.penup()
t.forward(200)
t.pendown()
drow(6,"pink",100)

