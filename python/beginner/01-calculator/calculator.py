def addition (x, y):
    return x + y

def subtraction (x, y):
    return x - y

def multiplication (x, y):
    return x * y

def division (x, y):
    if y != 0:
        return x / y
    else:
        print("Error: cant devide by zero")
        return None

# Function to print the menu
def printMenu ():
    print("Welcome to calculator!")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Mutliplication")
    print("4. Division")
    print("5. Quit")

# Function to take the user action choice
def operation ():
    z = int(input("\n\nChoose the operation (1-5): "))
    return z

import sys

def main ():

    play = True

    while (play):
        printMenu()
        choice = operation()

        if choice == 5:
            print("Goodbye!")
            sys.exit()

        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))

        match choice:
            case 1:
                result = addition(x, y)
                print(f"Result: {x} + {y} = {result}")
            case 2:
                result = subtraction(x, y)
                print(f"Result: {x} - {y} = {result}")
            case 3:
                result = multiplication(x, y)
                print(f"Result: {x} * {y} = {result}")
            case 4:
                result = division(x, y)
                print(f"Result: {x} / {y} = {result}")
            case _:
                print("Error: wrong input. Try again")

        continuePlay = input("Continue? (y/n): ")
        if continuePlay.lower() != "y":
            play = False

if __name__ == "__main__":
    main()
