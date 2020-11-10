import pygtk
import gtk

def greet(widget,data=None) :
	print("You just clicked on the button") # event handler

w = gtk.Window()
w.show()
b = gtk.Button("Click Here")
w.add(b)
b.show()
b.connect("clicked",greet, None) # Connect event with event handler
gtk.main() # Program waits for user using this comment #loopback function
