def get_total_bill ():
    total_bill = 0
    try:
        bill = input("Do have any Bill say yes or no ?: ")

        if (bill == "YES" or bill == "Yes" or bill == "yes" or bill == "Y" or bill == "y"):
            t_bill = int(input("Enter this bill : "))
            total_bill +=t_bill
        else:
            pass
    except Exception as e:
        print(e)
    finally:
        print("continue ...................")

    return total_bill


