import graphics
from graphics import *
import math
from math import *

def test():
    one = Point(1,2)
    two = Point(2,1)
    three = Point(add(one,two))
    """three.x = (one.x + two.x)
    three.y = (one.y + two.y)"""
    print("(",three.x,",",three.y,")")

test()

