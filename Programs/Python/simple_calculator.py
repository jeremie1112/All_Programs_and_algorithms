#Calculator

#Addition
def Addition(number1, number2):
    print("\n### Addition ###\n")
    print(number1 + number2)

#Subtraction
def Subtraction(number1, number2):
    print("\n### Subtraction ###\n")
    print(number1 - number2)

#Multiplication
def Multiplication(number1, number2):
    print("\n### Multiplication ###\n")
    print(number1 * number2)

#Divison
def Division(number1, number2):
    print("\n### Division ###\n")
    if (number2 == 0):
        print("No solution. (Cannot divide by zero)")
    else:
        print(number1 / number2)


#User input
num1 = float(input("Enter number 1:\n> "))
num2 = float(input("Enter number 2:\n> "))
choice = input("Enter number:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n> ")

if (choice == "1"):
    Addition(num1, num2)
elif (choice == "2"):
    Subtraction(num1, num2)
elif (choice == "3"):
    Multiplication(num1, num2)
elif (choice == "4"):
    Division(num1, num2)
else:
    print("\nChoice not found.")