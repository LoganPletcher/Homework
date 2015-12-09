class Vector2D:
    def __init__(self, a, b):
        self.x = a + 0.0
        self.y = b + 0.0
    def __add__(self, other):
        temp = Vector2D(0,0)
        temp.x = self.x + other.x
        temp.y = self.y + other.y
        return temp
    def __sub__(self, other):
        temp = Vector2D(0,0)
        temp.x = self.x - other.x
        temp.y = self.y - other.y
        return temp
    def __mul__(self, other):
        temp = Vector2D(0,0)
        temp.x = self.x * other.x
        temp.y = self.y * other.y
        return temp
    def div(self, other):
        temp = Vector2D(0,0)
        temp.x = self.x / other.x
        temp.y = self.y / other.y
        return temp
test = Vector2D(2,4)
print (" ",test.x,test.y)
test2 = Vector2D(2,2)
print ("/",test2.x,test2.y)
test3 = test.div(test2)
print ("  -------")
print (" ",test3.x,test3.y)
