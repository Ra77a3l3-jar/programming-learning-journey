# Project 1: Dynamic Linked List Implementation

## Objective
Implement a complete linked list data structure with dynamic memory allocation.

## Skills You'll Learn
- Dynamic memory allocation (malloc, free)
- Pointer manipulation and pointer arithmetic
- Linked list operations (insert, delete, search)
- Memory leak prevention
- Debugging with valgrind

## Requirements
1. Implement single and double linked lists
2. Add functions for insertion (beginning, end, middle)
3. Add functions for deletion and searching
4. Implement list traversal and display
5. Handle memory management properly

## Step-by-Step Guide
1. Define node structures for single and double linked lists
2. Implement basic operations (create, insert, delete)
3. Add utility functions (length, search, reverse)
4. Test with various scenarios
5. Use valgrind to check for memory leaks

## Compilation and Testing
```bash
gcc -o linkedlist linkedlist.c -g
./linkedlist

# Check for memory leaks
valgrind --leak-check=full ./linkedlist
```

## Bonus Challenges
- Implement circular linked lists
- Add merge and split operations
- Create a generic linked list (void pointers)
- Implement stack and queue using linked lists
- Add iterator functionality

## Expected Output Example
```
=== Linked List Manager ===
1. Insert at beginning
2. Insert at end
3. Insert at position
4. Delete by value
5. Delete at position
6. Display list
7. Search value
8. Reverse list
9. Quit

Current list: [10] -> [20] -> [30] -> NULL
List length: 3

Choose operation: 1
Enter value: 5
List after insertion: [5] -> [10] -> [20] -> [30] -> NULL
```

## Files to Create
- `linkedlist.c` - Main implementation
- `linkedlist.h` - Header with structure definitions
- `test_linkedlist.c` - Test cases
- `Makefile` - Build configuration

## Key Concepts to Practice
- Pointer manipulation
- Dynamic memory allocation
- Memory deallocation and leak prevention
- Node traversal algorithms
- Edge case handling

## Memory Management Checklist
- [ ] Every malloc has a corresponding free
- [ ] No access to freed memory
- [ ] No memory leaks
- [ ] Proper null pointer checks

## Time Estimate
6-8 hours