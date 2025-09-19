# Project 1: Hello World and Basic I/O

## Objective
Get familiar with C syntax, compilation, and basic input/output operations.

## Skills You'll Learn
- C program structure
- Compilation process with gcc
- Printf and scanf functions
- Basic data types (int, float, char)
- String handling basics

## Requirements
1. Write a program that prints "Hello, World!"
2. Get user input for name and age
3. Perform basic arithmetic with user input
4. Display formatted output
5. Handle different data types

## Step-by-Step Guide
1. Create a basic C program structure
2. Learn to compile with: `gcc -o program program.c`
3. Use printf for output formatting
4. Use scanf for user input
5. Practice with different data types

## Compilation Commands
```bash
gcc -o hello hello.c
./hello
```

## Bonus Challenges
- Add input validation
- Create a simple conversion tool (temperature, currency)
- Learn about format specifiers (%d, %f, %s, %c)
- Handle string inputs safely

## Expected Output Example
```
Hello, World!

What's your name? John
How old are you? 25

Hello John! You are 25 years old.
Next year you will be 26.

Enter two numbers: 15 7
15 + 7 = 22
15 - 7 = 8
15 * 7 = 105
15 / 7 = 2 (remainder 1)
```

## Files to Create
- `hello.c` - Basic hello world program
- `user_input.c` - Program with user interaction
- `calculator.c` - Simple arithmetic operations
- `Makefile` - Compilation automation

## Time Estimate
2-3 hours