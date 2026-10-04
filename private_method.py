class car:
    def __init__(self, name, colore, price):
        self.name = name
        self._colore = colore  # protect attribute
        self.__price = price  # private attribute

    def show(self):  # public method
        print(self.name)
        print(self._colore)
        print(self.__price)

    def __display(self):  # private method
        print("if contart us , its can be discound 15% ")

    def show2(self):
        self.__display()


car_datils = car("Bmw", "blue", 6000009)
car_datils.show()
car_datils.show2()
