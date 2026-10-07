#overloading : function overloading means having multiple functions with the same name but diffrerent parameters.
class persion:


    def diru(self , name=None):
        if name == None:
            print("My name is :")
        else:
         print("MY name is :" +name)
res = persion()
res.diru()
res.diru("Zihad")

#overwriting : Method overriding means redefining a parent class method in the child class wit the same name

class Student:
    def show(self):
        return "My name is Zihad"
class student2(Student):
    def show(self):
        #print(super().show())
        return "My name is Riyad"

st=student2()
print(st.show())

