/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:37:52 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 14:01:28 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_algo_choice(t_list *stack_a, t_list *stack_b)
{
	int	size;
	(void)stack_b;

	size = ft_lstsize(stack_a);
	if (size == 2)
		ft_sa(stack_a);
	if (size == 3)
		ft_resolution3(stack_a);
	else
		ft_printf("Not yet!");
}

int	ft_parsing(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		if (!ft_check_nb(j, av[i]) || !ft_check_space(av[i])
			|| !ft_check_sign(av[i]) || !ft_check_double(ac, av))
		{
			ft_puterror("Error\n");
			return (0);
		}
		i++;
	}
	if (!ft_check_order(ac, av))
		return (0);
	return (1);
}

int	main (int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!ft_parsing(ac, av))
		return (0);
	stack_a = argv_to_stack_a(stack_a, av);
	if (!stack_a)
		return (0);
	ft_algo_choice(stack_a, stack_b);
	ft_lstclear_swap(&stack_a);
	ft_lstclear_swap(&stack_b);
	//while (stack_a)
	//{
	//	printf("%d\n", stack_a->content);
	//	stack_a = stack_a->next;
	//}
	//	CHECK BELOW COMMENTARY
	//	then free stack_a and stack_b
	return (0);
}

// now need to do the algorithm
// algochoice function will decide which sorting algorithm we'll chose
// for size == 2 -> we do 'sa'
// for size == 3 -> we'll try to implement a simple algo
// for size == 4 -> same as above
// size == 5 -> same as above
// size == 100 -> insertion sort
// else, radix sort.
