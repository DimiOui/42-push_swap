Initialise 2 stacks (stack a, stack b)

Stack a is initialized as an argument of the push_swap program
first argument is on top of the stack
Program displays the smallest list of instructions possible to sort the stack a (with smallest on top)

----------------------------------------------------------------------------------
Instruction set :

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.

rrr : rra and rrb at the same time.

-----------------------------------------------------------------------------------

Instructions must be separated by a \n.

Must implement an error system : must display Error\n

Ressources :

https://github.com/VBrazhnik/Push_swap/wiki/Algorithm
https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a
https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e

-----------------------------------------------------------------------------------

Sorting a list of 3 random numbers :

./push_swap 2 3 1

Here we have 3 arguments in our push_swap program.
Might want to parse each number and put them on stack A like :

Check the input (the args).
```
	if only one arg ex : "2 3 1", it's an error. Each arg should be a number.
	if arg looks like : 2 3 1, then each argv[] is a number.

// need to check if numbers are correct, no duplicates etc (done after loading into stack A)...
// need to handle errors that could look like this 2- 3 1, 2  3 1,  2 - 3 1, etc...
```

Once the input has been checked, load it into stack A.
Once stack A is loaded we check duplicates.
Once stack A is loaded, and we checked the duplicates, check if the list is sorted. If so, the program ends. (```A_is_sorted()```)
```
if (stack_A <= 5)
	sort_small_stack;
else
	sort_big_stack;
```

For the algo, I'll use the Radx sort (check https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
