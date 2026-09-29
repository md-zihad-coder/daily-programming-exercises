with open("newfile.txt", "r") as f:
    data = f.read()  # read this file "r" mode
    print(data)

with open("newfile.txt", "w") as f:  # Truncate this file and agin new write
    data = f.write("hi new file")  # in "W" mode

with open("newfile.txt", "a") as f:
    data = f.write("abc")  # appending to end this file alrady exist

with open("newfile.txt", "r+") as f:
    data = f.write("Hi")
    reader = f.seek(0)  # writing and appending (firest) but not Truncate
    reader = f.read()  # "r+" mode
    print(reader)

with open("newfile.txt", "w+") as f:  # file Truncate than write + read "w+"
    data = f.write("Sorry")  # mode
    new_data = f.seek(0)
    new_data = f.read()
    print(new_data)

with open("newfile.txt", "a+") as f:
    data = f.write("xyz")  # file end write add + read not Truncate "a+" mode
    data = f.seek(0)
    data = f.read()
    print(data)


