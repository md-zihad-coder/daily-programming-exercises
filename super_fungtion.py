
class man:
    def __init__(self,hear_color,profession):
        self.hear_color = hear_color
        self.profession = profession
    def display(self):
        print(self.hear_color)
        print(self.profession)
class body(man):
    def __init__(self,hear_color,profession,hand,leg):
        self.hand=hand
        self.leg=leg
        super().__init__(hear_color,profession)
      #  super().display()
bd = body("black","Student","hand2","leg2")
bd.display()

# 2 ta k add kora ai ta use kora
class man:
    def dis(self):
        print("hi my name is ", end="")


class mane(man):
    def display(self):
        super().dis()
        print("Zihad")


m = mane()
m.display()