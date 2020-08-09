import turtle

aman_turtle=turtle.Turtle()

# to modify the Speed of this turtle
# aman_turtle.speed(1)

def Square():
    aman_turtle.forward(100)
    aman_turtle.right(90)
    aman_turtle.forward(100)
    aman_turtle.right(90)
    aman_turtle.forward(100)
    aman_turtle.right(90)
    aman_turtle.forward(100)


# FOR LOOP CODE

for i in range(6):
    Square()