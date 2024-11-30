''') Initialize the turtle canvas and draw the following commands
i. Move forward 100 pixel
ii. Rotate anticlockwise 90 degree
iii. Move forward 200 pixel without drawing
iv. Draw a circle with radius 150 pixel with red color
v. Go to Home.'''
import turtle
turtle.forward(100)
turtle.left(90)
turtle.penup()
turtle.forward(200)
turtle.down()
turtle.fillcolor("red")
turtle.begin_fill()
turtle.circle(150)
turtle.end_fill()
turtle.home()
turtle.done()
