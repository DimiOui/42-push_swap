# Pushswap

This project implements the pushswap sorting algorithm using Radix sort. The goal is to sort a stack of integers using a limited set of operations, namely "push" and "swap." Radix sort is an efficient sorting algorithm that works by distributing numbers into different buckets based on their digits, and then repeatedly sorting the numbers by each digit position.

## Radix Sort Implementation

Here is a brief overview of the Radix sort algorithm:

1. Determine the maximum number of digits in the input array to determine the number of iterations.
2. Iterate through each digit position from the least significant digit to the most significant digit.
3. Create ten buckets (0-9) to hold the numbers based on the current digit.
4. Distribute the numbers into the buckets based on the current digit.
5. Collect the numbers from the buckets in the order of the bucket index (0-9).
6. Repeat steps 4 and 5 for each digit position.
7. The numbers in the stack are now sorted in ascending order.

## Usage

To use `pushswap`, follow these steps:

1. Clone and compile the project. For example:
```bash
git clone <project-url>
make
```

2. Run the compiled executable, providing the list of integers as command-line arguments. For example:
```bash
./pushswap 5 2 9 1 3
```

3. The program will output the sequence of operations needed to sort the stack. For example:
```bash
sa pb pb sa pa pa
```

4. The stack will be sorted at the end, and the program will exit.

## Ressources :

https://github.com/VBrazhnik/Push_swap/wiki/Algorithm
https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
