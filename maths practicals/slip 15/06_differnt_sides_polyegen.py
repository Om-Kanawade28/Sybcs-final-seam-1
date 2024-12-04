import turtle
def draw(side,color,size):
    angle = 360/side
    turtle.fillcolor(color)
    turtle.begin_fill()
    for i in range(side):
        turtle.forward(size)
        turtle.left(angle)
    turtle.end_fill()
    
draw(3,"red",20)
turtle.penup()
turtle.forward(30)
turtle.pendown()
draw(4,"green",40)
turtle.penup()
turtle.forward(50)
turtle.pendown()
draw(5,"blue",60)
turtle.penup()
turtle.forward(70)
turtle.pendown()
draw(6,"pink",80)
turtle.penup()
turtle.forward(80)
turtle.pendown()