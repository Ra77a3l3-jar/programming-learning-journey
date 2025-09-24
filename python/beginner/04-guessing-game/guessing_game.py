def greeting():

    print("Welcome to the Number Guessing Game!")

import random

def main():

    greeting()


    cycle_0 = True;

    while cycle_0:

        target = random.randint(1,100)
        cycle_1 = True
        attemps = 0;

        while cycle_1:

            guess = int(input("Enter your guess: "))
            attemps += 1;
        
            if guess > target:
                print("Too high! Try again\n")
            elif guess == target:
                    print(f"Congratulations! You got it in {attemps} attemps!\n")
                    play = input("Play again? (y/n): ")
                    if play == 'y':
                        cycle_1 = False
                    else:
                        cycle_1 = False
                        cycle_0 = False
            else:
                print("Too low! Try again\n")

if __name__ == "__main__":
    main()
