with open ("tester.txt", "w+") as f:
    f.write("wo ")
    f.seek(0)
    data=f.read()
    print(data)

