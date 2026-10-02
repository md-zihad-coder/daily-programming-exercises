class Market:
    Market_name = "Abc market"                  #class Attribute
    def __init__(self,name , price):

        self.name=name
        self.price=price


vzt=Market("tomato",200)          #Instance Attribute
print(vzt.name)
print(vzt.price)
print(vzt.Market_name)

vzt=Market("Cumber",250)         #Instance Attribute
print(vzt.name)
print(vzt.price)
print(vzt.Market_name)

vzt=Market("Ladies finger",300)      #Instance Attribute
print(vzt.name)
print(vzt.price)
print(vzt.Market_name)