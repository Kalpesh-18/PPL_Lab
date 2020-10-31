import turtle
s = turtle.getscreen()
t = turtle.Turtle()
class shape:
    def __init__(self,sides=0,length=0):
	    self.sides=sides
	    self.length=length
	    
class polygon(shape):
    def show(self):
	    t.fd(self.length)
	    t.rt(90)
	    t.fd(self.length)
	    t.rt(90)
	    t.fd(self.length)
	    t.rt(90)
	    t.fd(self.length)
	    t.rt(90)
	    
class triangle(polygon):
    def show(self):
        t.forward(self.length) 
        t.left(120)
        t.forward(self.length)
        t.left(120)
        t.forward(self.length)

class square(polygon):
    def show(self):
        t.fd(self.length)
        t.rt(90)
        t.fd(self.length)
        t.rt(90)
        t.fd(self.length)
        t.rt(90)
        t.fd(self.length)
        t.rt(90)
		
class pentagon(polygon):
    def show(self):
	    for i in range(5):
		    t.forward(self.length)
		    t.right(72)

class hexagon(polygon):
    def show(self):
        for i in range(6):
           t.forward(self.length) 
           t.right(60)

class octagon(polygon):
    def show(self):
        for i in range(8):
           t.forward(self.length) 
           t.right(45)

			
p1=triangle(3,100)
p1.show()

p2=square(4,100)
p2.show()

p3=pentagon(5,100)
p3.show()

p4=hexagon(6,100)
p4.show()

p5=octagon(8,100)
p5.show()
