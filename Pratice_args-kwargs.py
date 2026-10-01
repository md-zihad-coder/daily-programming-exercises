def add(*agrs):
    sum = 0

    for i in agrs:
        sum = sum + i
    print("Your answer is : ", sum)


add(1, 9, 3, 22)


def students(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)


students(name="Zihad", roll=20, age=21, interviwer="Zara company Senior employee", code="logic")