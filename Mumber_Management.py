class Mumbermanage:
    try:

        print("How many members would you like to add?", end=" ")
        add_mum = int(input())
        print("Enter the name below:")
        nm = 1
        for nm in range(add_mum):
            print(f"{nm} name is ", end=" ")

            input_name = input()
            if input_name.isalpha():
                pass
            else:
                print("Invalid input! Please enter the correct value.")
                break
    except ValueError as e:
        print("Invalid input! Please enter the correct value.", e)
    except NameError as e:
        print("Invalid input! Please enter the correct value.", e)
    except KeyboardInterrupt as e:
        print("Invalid input! Please enter the correct value.", e)
    except Exception as e:
        print("Invalid input! Please enter the correct value.")

    print("Total number of members added : ", add_mum)


