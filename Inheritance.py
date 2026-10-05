#single Inheritance
class Mass:
    mas_name = "Olit mass"

    def __init__(self, name, address):
        self.name = name
        self.address = address

    def display(self):
        print(self.name, self.address)


class Zihad(Mass):
    age = 20


total = Zihad("Razu", "khulna")
total.display()
print(total.mas_name)


# Malti-leval  inheritance



class animal:
    @staticmethod
    def display():
        return ("good animal ")


class cow(animal):
    @staticmethod
    def show():
        return ("is cow")


class hen(cow):

        pass


rs = hen()
print(f"{rs.show()} and {rs.display()}")


# Multiple inheritance

class dog:
    def __init__(self, name , age):
        self.name = name
        self.age= age
    def display1(self):
        print(self.name,self.age)
class cat :
    def __init__(self, name , age):
        self.name= name
        self.age =age
    def display2(self):
        print(self.name,self.age)
class taiger:
    def __init__(self,name , age):
        self.name = name
        self.age = age
    def display3(self):
        print(self.name , self.age)

class moderer(dog, cat ,taiger):
    pass



res=moderer("ARU VI", 500)
res.display1()
res.display2()
res.display3()
















