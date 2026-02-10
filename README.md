*This project has been created as part of the 42 curriculum by mvelasqu*

## Description & Overview

**push_swap** is an algorithmic project that challenges students to sort a list of integers using only two stacks and a limited set of predefined operations.

The objective is not only to sort correctly, but to do so as efficiently as possible, minimizing the number of operations executed.

This project focuses heavily on:

- Data structure manipulation
- Algorithm optimization
- Understanding sorting techniques
- Working with linked lists
- Efficient problem solving

## Objective 

The goal is to sort integers in <ins>stack a</ins> in ascending order — with the smallest value at the top — using only the allowed operations.

### Available Operations

- **sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.
- **sb (swap b):** Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.
- **ss :** sa and sb at the same time.
- **pa (push a):** Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb (push b):** Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra (rotate a):** Shift up all elements of stack a by 1. The first element becomes the last one.
- **rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one.
- **rr :** ra and rb at the same time.
- **rra (reverse rotate a):** Shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr :** Perform rra and rrb at the same time.

### Sorting Strategy
The sorting approach used in this project is divided based on the number of nodes:
- **2 nodes**: Uses a simple swap operation
- **3 nodes**: Uses location-based sorting
- **4–5 nodes**: Uses division combined with the 3-node sorting logic
- **6 nodes and above**: Uses a radix sort algorithm

## How to Use

### 1. Compile the Program

Run the Makefile to compile the program and create the executable:
```bash
make
```
### 2. Run the program with valid parameters:

```bash
./push_swap <arguments>
```
### Input Rules
- Arguments must be valid integers (positive or negative)
- No duplicate values are allowed
- Values must be within the range of INT_MIN and INT_MAX
- Invalid input will result in an Error message

### Output

The program outputs a sequence of operations that will sort the input list.

Example output:
```bash
pb
pb
pa
pa
pa
```

Each line represents one of the allowed operations applied to the stacks.

### Example Usage

Sorting a small set:
```bash
$ ./push_swap 5 1 4 2 3
```

Sample output:
```bash
ra
pb
ra
pb
rra
sa
pa
pa
```

You can pipe the output into the official checker program (download at the project page):

```bash
ARG="5 1 4 2 3"; ./push_swap $ARG | ./checker_linux $ARG
```

## Resources

To better understand the concepts behind this project:

- Stack data structure fundamentals
- Sorting algorithms (especially radix sort)
- Linked lists: singly, doubly, and circular
- Bitwise operations in C