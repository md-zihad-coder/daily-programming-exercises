#lambda fungtion
n=lambda x:x**3
m=n(2)

print("Your lambda fungtion use answer is ",m)



#map fungtion

number=[1,2,3,4,5,7,6,8,9]
m=list(map(lambda x:x **2,number ))
print(m)
m.sort()
print("Your map fungtion use answer is : ",m)
#filter fungtion
number = [2,4,6,9,13,34,19,10,30,25]
cal_number= list(filter(lambda x : x %2==0 , number))
print(cal_number)
cal_number.sort()
print("Your filter fungtion answer is : ",cal_number)


