# Project 2: Custom Memory Manager

## Objective
Build a custom memory allocator that manages memory allocation and deallocation.

## Skills You'll Learn
- Low-level memory management
- Memory pool allocation
- Fragmentation handling
- Memory debugging techniques
- Performance optimization

## Requirements
1. Implement custom malloc and free functions
2. Track allocated and free memory blocks
3. Handle memory fragmentation
4. Provide memory usage statistics
5. Detect memory leaks and double-free errors

## Step-by-Step Guide
1. Design memory block structure with headers
2. Implement basic allocation algorithm
3. Add free block coalescing
4. Create debugging and statistics functions
5. Test with various allocation patterns

## Compilation Commands
```bash
gcc -o memory_manager memory_manager.c test_memory.c -g
./memory_manager

# Advanced debugging
valgrind --tool=memcheck ./memory_manager
```

## Bonus Challenges
- Implement different allocation strategies (first-fit, best-fit)
- Add memory alignment requirements
- Create thread-safe version
- Implement garbage collection basics
- Add memory corruption detection

## Expected Output Example
```
=== Custom Memory Manager ===

Memory Manager Statistics:
Total heap size: 1024 KB
Allocated blocks: 5
Free blocks: 3
Memory utilization: 67.3%
Largest free block: 256 KB

Allocation Test:
Allocating 100 bytes... [SUCCESS] Address: 0x7fff8a2b4010
Allocating 200 bytes... [SUCCESS] Address: 0x7fff8a2b4074
Freeing first block... [SUCCESS]
Memory after free: 2 allocated, 4 free blocks

Memory Leak Check: No leaks detected
```

## Files to Create
- `memory_manager.c` - Main allocator implementation
- `memory_manager.h` - Public interface
- `test_memory.c` - Comprehensive tests
- `debug_tools.c` - Debugging utilities
- `Makefile` - Build system

## Key Concepts to Practice
- Memory layout and alignment
- Linked list management for free blocks
- Fragmentation algorithms
- Error detection and reporting
- Performance measurement

## Advanced Topics
- Memory coalescing algorithms
- Buddy system allocation
- Slab allocation
- Memory mapping with mmap

## Time Estimate
8-10 hours