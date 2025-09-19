# Project 4: Number Guessing Game

## Objective
Create an interactive guessing game where the computer picks a number and the user tries to guess it.

## Skills You'll Learn
- Random number generation
- While loops
- User input validation
- Conditional statements
- Game logic implementation

## Requirements
1. Generate a random number between 1 and 100
2. Allow the user to guess the number
3. Provide hints (too high/too low)
4. Count the number of attempts
5. Option to play again

## Step-by-Step Guide
1. Import the `random` module
2. Generate a random number
3. Create a loop for guessing
4. Compare guess with the target number
5. Provide appropriate feedback
6. Track attempts and display final score

## Bonus Challenges
- Add difficulty levels (different ranges)
- Implement a high score system
- Add a hint system (show one digit)
- Create a reverse mode where user picks, computer guesses

## Expected Output Example
```
Welcome to the Number Guessing Game!
I'm thinking of a number between 1 and 100.

Enter your guess: 50
Too high! Try again.

Enter your guess: 25
Too low! Try again.

Enter your guess: 37
Congratulations! You got it in 3 attempts!

Play again? (y/n):
```

## Files to Create
- `guessing_game.py` - Main game program

## Time Estimate
2-3 hours