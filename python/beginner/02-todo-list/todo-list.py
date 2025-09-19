def add_task():
    status = input("Enter the status of the new task (done/not_done): ")
    task_name = input("Enter the task's name: ")
    due_date = input("Enter the due date (MM-DD-YYYY): ")

    with open('task.txt', 'a') as file:
        file.write(f"{status}|{task_name}|{due_date}\n")

def view_tasks():


def compleate_task():

def delete_task():


def printMenu ():
    print("=== Todo List Manager ===")
    print("1. add a new task")
    print("2. remove a task")
    print("3. compleate a task")
    print("4. list all the tasks")
    print("5. Quit")

def operation ():
    z = int(input("\n\nChoose the operation (1-5): "))
    return z

import sys

def main():

    tasks = []

    contin = True

    while(contin):

        printMenu()

        choice = operation()
        if choice == 5:
            print("Goodbye!")
            sys.exit()

        match choice:
            case 1:
                
            case 2:
                
            case 3:
                
            case 4:
                
            case _:
                print("Error: wrong input. Try again")

        continuePlay = input("Continue? (y/n): ")
        if continuePlay.lower() != "y":
            play = False


if __name__ == "__main__":
    main()
