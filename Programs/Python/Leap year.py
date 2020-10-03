for i in range(int(input("How many Times you want to check"))):
    year = int(input("Enter the Number"))
    if (year % 4) == 0:
        if (year % 100) == 0:
            if (year % 400) == 0:
                print("Yes")
            else:
                print("No")
        else:
            print("Yes")
    
    else:
        print("No")