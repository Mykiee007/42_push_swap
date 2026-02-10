_This project has been created as part of the 42 curriculum by mvelasqu_

# Description

**push_swap** is a project designed to enhance your understanding of data structures and algorithmic manipulation. 

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

### Sorting Operation
The sorting approach used in this project is divided based on the number of nodes:
- **2 nodes**: Uses a simple swap operation
- **3 nodes**: Uses location-based sorting
- **4–5 nodes**: Uses division combined with the 3-node sorting logic
- **6 nodes and above**: Uses a radix sort algorithm

# Instructions

This project can be executed by following these 3 simple steps:
1. Run the Makefile to compile the program and create the executable:
```bash
make
```
2. Run the program with valid parameters:
```bash
./push_swap <arguments>
```
- Arguments must be valid positive or negative integers
- If any argument is not an integer, contains duplicates, or exceeds INT_MAX or INT_MIN, the program will display an error
3. The output will be a list of operations used to sort the given set of integers.

# Resources

To better understand this project, it is recommended to study the following topics:
- Understanding stacks
- Sorting techniques – particularly radix sort
- Linked lists (singly, doubly, and circular)
