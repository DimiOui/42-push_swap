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
