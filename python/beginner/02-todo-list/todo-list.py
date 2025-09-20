def add_task():
    status = input("Enter the status of the new task (done/not_done): ")
    task_name = input("Enter the task's name: ")
    due_date = input("Enter the due date (MM-DD-YYYY): ")

    with open('task.txt', 'a') as file:
        file.write(f"{status}|{task_name}|{due_date}\n")

def view_tasks():
    try:
        with open('task.txt', 'r') as file:
            lines = file.readlines()  # It reads all the lines in the .txt to the List called lines
            if not lines:
                print("No tasks found.")
                return
            print("Your tasks:")
            for idx, line in enumerate(lines, 1):
                status, name, due = line.strip().split('|')  # Removes spaces/new_lines and splits the string
                checkbox = '[x]' if status == 'done' else '[ ]' # checkbox will be printed instead of status and will show [x] or []
                print(f"{idx}. {checkbox} {name} (Due: {due})")
    except FileNotFoundError:
        print("No tasks found.")

def compleate_task():
    try:
        with open('task.txt', 'r') as file:
            lines = file.readlines()
        if not lines:
            print("No tasks to complete.")
            return
        # Prints all the tasks
        print("Which task did you complete?")
        for idx, line in enumerate(lines, 1):
            status, name, due = line.strip().split('|')
            checkbox = '[x]' if status == 'done' else '[ ]'
            print(f"{idx}. {checkbox} {name} (Due: {due})")
        num = int(input("Enter task number: "))
        if num < 1 or num > len(lines):
            print("Invalid task number.")
            return
        # Mark as done
        status, name, due = lines[num-1].strip().split('|')  # lines[num-1] since list are 0 indexed, and saving info about the task
        lines[num-1] = f"done|{name}|{due}\n"  # Changes status to done
        with open('task.txt', 'w') as file:
            file.writelines(lines)  # Updating the task file .txt
        print(f"Task '{name}' marked as completed.")
    except FileNotFoundError:
        print("No tasks found.")
    except ValueError:
        print("Invalid input.")

def delete_task():
    try:
        with open('task.txt', 'r') as file:
            lines = file.readlines()
        if not lines:
            print("No tasks to delete.")
            return
        # Printing all the tasks
        print("Which task do you want to delete?")
        for idx, line in enumerate(lines, 1):
            status, name, due = line.strip().split('|')
            checkbox = '[x]' if status == 'done' else '[ ]'
            print(f"{idx}. {checkbox} {name} (Due: {due})")
        # Getting number of task to delete
        num = int(input("Enter task number: "))
        if num < 1 or num > len(lines):
            print("Invalid task number.")
            return
        status, name, due = lines[num-1].strip().split('|')  # Saving info of the task that is getting deleted
        del lines[num-1]  # Deleting task num-1
        with open('task.txt', 'w') as file:
            file.writelines(lines)  # Updating the file .txt
        print(f"Task '{name}' deleted.")  # Using the info we saved at line 70
    except FileNotFoundError:
        print("No tasks found.")
    except ValueError:
        print("Invalid input.")

def printMenu ():
    print("=== Todo List Manager ===")
    print("1. Add a new task")
    print("2. Delete a task")
    print("3. Complete a task")
    print("4. List all the tasks")
    print("5. Quit")

def operation ():
    z = int(input("\n\nChoose the operation (1-5): "))
    return z

import sys

def main():
    while True:
        printMenu()
        choice = operation()
        if choice == 5:
            print("Goodbye!")
            sys.exit()
        match choice:
            case 1:
                add_task()
            case 2:
                delete_task()
            case 3:
                compleate_task()
            case 4:
                view_tasks()
            case _:
                print("Error: wrong input. Try again")
        continuePlay = input("Continue? (y/n): ")
        if continuePlay.lower() != "y":
            break

if __name__ == "__main__":
    main()
