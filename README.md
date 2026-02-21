# Data Structures in C

## Overview

This repository contains structured implementations of fundamental data structures in C. The objective of this project is to strengthen core programming concepts, improve algorithmic thinking, and build a solid foundation for academic coursework and technical interview preparation.

All implementations are written with clarity, modular structure, and proper documentation.

---

## Repository Structure
    data-structures-in-c
    │
    ├── arrays
    │ └── array_operations.c
    │
    ├── linked-list
    │ └── singly_linked_list.c
    │
    ├── stack
    │ ├── stack_array.c
    │ └── applications
    │ └── prefix_to_infix.c
    │
    ├── queue
    │ └── queue_array.c
    │
    └── README.md

---

## Implemented Data Structures

### Arrays

- Insertion at a specific position  
- Deletion  
- Display operation  
- Manual element shifting logic  

### Singly Linked List

- Insertion at beginning  
- Deletion by value  
- Traversal and display  
- Dynamic memory allocation using `malloc`  

### Stack (Array Implementation)

- Push  
- Pop  
- Display  
- Overflow and underflow handling  

#### Stack Application

- Prefix to Infix expression conversion  
  Demonstrates stack usage for expression parsing.

### Queue (Array Implementation)

- Enqueue  
- Dequeue  
- Display  
- Boundary condition handling  

---

## Compilation and Execution

Compile using GCC:
gcc filename.c -o output
./output

Example:
gcc stack_array.c -o stack
./stack


---

## Time Complexity Overview

| Data Structure | Operation            | Time Complexity |
|----------------|---------------------|-----------------|
| Array          | Insertion           | O(n)            |
| Array          | Deletion            | O(n)            |
| Linked List    | Insertion           | O(1)            |
| Linked List    | Deletion            | O(n)            |
| Stack          | Push / Pop          | O(1)            |
| Queue          | Enqueue / Dequeue   | O(1)            |

---

## Learning Objectives

- Strengthen pointer fundamentals  
- Understand static versus dynamic memory allocation  
- Implement linear data structures from scratch  
- Apply stack concepts to expression conversion problems  
- Practice structured and modular programming  

---

## License

This project is licensed under the MIT License.

---
