from array import *
val = array("i",[11,22,33,44,55,66,77])
x=77
for i in range(len(val)):
    if (val[i]==x):
        print(i)
        break
    else:
        print("this value is not exist")