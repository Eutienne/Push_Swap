# Push_Swap

This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions.<br/>To succeed you’ll have to manipulate various
types of algorithms and choose the one (of many) most appropriate solution for an
optimized data sorting.

## Goal

Write 2 programs in C:

• The first, named checker which takes integer arguments and reads instructions on
the standard output. Once read, checker executes them and displays OK if integers
are sorted. Otherwise, it will display KO.

• The second one called push_swap which calculates and displays on the standard
output the smallest progam using Push_swap instruction language that sorts integer arguments received.

## Game rules

The game is composed of 2 stacks named a and b. Stack a contains the numbers that need to be sorted and stack b is empty.
<br/>In the end all numbers need to be sorted in ascending order in stack a and stack b needs to be empty.

You can use the following operations:
 - sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
 is only one or no elements).
 - sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
is only one or no elements).
 - ss : sa and sb at the same time.
 - pa : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
 - pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
 - ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.
 - rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.
 - rr : ra and rb at the same time.
 - rra : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.
 - rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.
 - rrr : rra and rrb at the same time.

### checker

```
$>./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
```

Thanks to the checker program, you will be able to check if the
list of instructions you’ll generate with the program push_swap is
actually sorting the stack properly.

### pushswap

The program must display the smallest list of instructions possible to sort the stack
a, the smallest number being at the top.

```
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```

### Algorithms to check

Selection Sort                  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Bubble Sort
<br>Recursive Bubble Sort       &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Insertion Sort
<br>Recursive Insertion Sort    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Merge Sort
<br>Iterative Merge Sort        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Quick Sort
<br>Iterative Quick Sort        &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Heap Sort

## Bonus

I created two bonusses:
 - h flag, to print the usage of pushswap, run ./push_swap -h
 - s flag, to print the stacks after sorting, run ./push_swap -s [numbers to sort]
 
 ## Usage
 
 ```
 $>./push_swap [-hs] [numbers]
 ```


