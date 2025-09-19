# Project 3: Student Grade Management System

## Objective
Create a program to manage student grades using arrays and structures.

## Skills You'll Learn
- Arrays (1D and 2D)
- Structures and typedef
- File I/O operations
- String manipulation
- Sorting and searching algorithms

## Requirements
1. Store student information (name, ID, grades)
2. Calculate average grades for each student
3. Find highest and lowest grades
4. Sort students by different criteria
5. Save/load data from files

## Step-by-Step Guide
1. Define a structure for student data
2. Use arrays to store multiple students
3. Implement functions for data manipulation
4. Add file operations for data persistence
5. Create a menu system for user interaction

## Compilation Commands
```bash
gcc -o grades student_grades.c file_operations.c -o grades
./grades
```

## Bonus Challenges
- Add grade distribution analysis
- Implement different grading scales
- Add course and subject management
- Create report generation
- Add data validation

## Expected Output Example
```
=== Student Grade Management ===
1. Add student
2. View all students
3. Calculate class average
4. Find top student
5. Save to file
6. Load from file
7. Quit

Choose option: 2

Student Records:
ID: 001, Name: Alice Johnson
Grades: 85, 92, 78, 88, 90
Average: 86.6

ID: 002, Name: Bob Smith
Grades: 76, 82, 85, 79, 83
Average: 81.0

Class Average: 83.8
```

## Files to Create
- `student_grades.c` - Main program
- `file_operations.c` - File handling functions
- `student_grades.h` - Header file with structures
- `students.txt` - Data file (created automatically)
- `Makefile` - Build automation

## Key Concepts to Practice
- Structure definition and usage
- Array manipulation
- File I/O with fopen, fread, fwrite
- String operations
- Basic algorithms (sorting, searching)

## Time Estimate
5-6 hours