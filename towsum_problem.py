num = [2, 7, 11, 15]
while True:
    try:
        tar = int(input("enter the number : "))
        found = False
        for i in range(len(num)):

            for j in range(i + 1, len(num)):
                if num[i] + num[j] == tar:
                    found = True
                    break
            if found:
                print(f"index number is : [{i},{j}]")
                break
        else:
            print("This number is not exist")
    except ValueError as e:

           print(e)












