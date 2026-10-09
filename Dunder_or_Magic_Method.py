class ager:
    def __init__(self,age1,age2,age3,age4):
        self.age1=age1
        self.age2=age2
        self.age3=age3
        self.age4=age4
    def __add__(self,other):                 # magic or dunder method __add__(),__str__(),__len__(),__eq__(),__del__()  etc......
        return self.age1+self.age2+self.age3+other.age4
result = ager(50,40,60,-70)
print(result+result)