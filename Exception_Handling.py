try:
    a=int(input("Enter your nb : "))
    b=int(input("Enter your nb : "))
    c=a*b
    print(c)
except ValueError:
    print("Value Error")

except ZeroDivisionError:
     print("ZeroDivisionError")
except TypeError:
    print("TypeError ")
except IndentationError:
    print("IndentationError")
except Exception as e:
     print("please enter integer number")
finally:

    print("Zihad islam")

print("End")
