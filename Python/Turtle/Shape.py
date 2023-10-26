from turtle import *

# Create a Turtle screen
wn = Screen()
wn.bgcolor("white")
for i in range(20):
    for i in range(6):
        forward(100)
        rt(60)

    for i in range(6):
        right(60)
        back(100)
    left(120)
    forward(100)

    for i in range(6):
        left(60)
        forward(100)

    left(60)
    forward(100)

    for i in range(5):
        forward(100)
        right(60)

    for i in range(6):
        backward(100)
        rt(60)
    forward(100)

done()