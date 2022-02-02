/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:37:52 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 01:26:04 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	parsing(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		if (!ft_check_nb(j, av[i])
			|| !ft_check_space(av[i]) || !ft_check_sign(av[i]))
		{
			ft_puterror("Error\n");
			return (0);
		}
		i++;
	}
	if (!ft_check_double(ac, av) || !ft_check_order(ac, av))
		return (0);
	return (1);
}

int	main (int ac, char **av)
{
	t_list	*stack_a;
	//	t_list	*stack_b;

	stack_a = NULL;
	//	b = NULL;
	if (!parsing(ac, av))
		return (0);
	argv_to_stack_a(stack_a, av);
	if (!stack_a)
		return (0);
	printf("Tout va bien\n");
	return (0);
}

//	PARSING IS NOT WORKING WITH AC SMH, CHECK PRINTFS HERE
// CHECK DOUBLE NOT WORKING
// USE GDB ASAP LINE 34
