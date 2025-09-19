# Project 2: Advanced Calculator with Functions

## Objective
Build a more sophisticated calculator using functions, control structures, and proper program organization.

## Skills You'll Learn
- Function declaration and definition
- Switch statements for menu systems
- Loops (for, while, do-while)
- Header files and modular programming
- Mathematical operations and math.h library

## Requirements
1. Create separate functions for each operation
2. Implement a menu-driven interface
3. Add advanced operations (power, square root, factorial)
4. Allow continuous calculations until user quits
5. Add input validation and error handling

## Step-by-Step Guide
1. Design function prototypes for each operation
2. Implement a switch-based menu system
3. Use loops for continuous operation
4. Add the math.h library for advanced functions
5. Organize code into multiple files

## Compilation Commands
```bash
gcc -o calculator calculator.c operations.c -lm
./calculator
```

## Bonus Challenges
- Add memory functions (store, recall, clear)
- Implement expression parsing (basic)
- Add history of calculations
- Create a scientific calculator mode
- Add unit conversions

## Expected Output Example
```
=== Advanced Calculator ===
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Power
6. Square Root
7. Factorial
8. Quit

Choose operation (1-8): 5
Enter base: 2
Enter exponent: 8
Result: 2^8 = 256

Continue? (y/n): y
```

## Files to Create
- `calculator.c` - Main program with menu
- `operations.c` - Implementation of calculation functions
- `operations.h` - Header file with function declarations
- `Makefile` - Build automation

## Key Concepts to Practice
- Function prototypes and definitions
- Switch statements
- Input validation
- Modular programming
- Mathematical library usage

## Time Estimate
4-5 hours