def family_mamber(*args):         # args
    for i in args:
        print(i)

family_mamber("father : Shamim" , "mother: Samurai" ," brother : Zihad","Sister : Sharmin" , )

print("\n")



def microsoft_employee(**kwarges):       #kwarges
    for key , value  in kwarges.items():
        print(key ,":", value)

microsoft_employee (
    name="Zihad",
    age =20,
    post = "Ai engineer")


