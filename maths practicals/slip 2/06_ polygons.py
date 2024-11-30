#) Initialize the turtle canvas and draw a colored polygons of different sides.
import turtle


def draw_polygon(sides, color, size):
    angle = 360 / sides
    turtle.fillcolor(color)
    turtle.begin_fill()
    for _ in range(sides):
        turtle.forward(size)
        turtle.left(angle)
    turtle.end_fill()

turtle.speed(0)  

draw_polygon(3, "red", 100)
turtle.penup()
turtle.goto(150, 0)
turtle.pendown()
draw_polygon(4, "blue", 100)
turtle.penup()
turtle.goto(300, 0)
turtle.pendown()
draw_polygon(5, "green", 100)
turtle.penup()
turtle.goto(450, 0)
turtle.pendown()
draw_polygon(6, "yellow", 100)


turtle.done()
