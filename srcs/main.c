/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:37:52 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/01 16:04:42 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main (int ac, char **av)
{
	t_list	*a;
	//	t_list	*b;

	a = NULL;
	//	b = NULL;
	if (ac > 2)
	{
		argv_to_stack_a(a, av);
		if (!a)
			return (0);
	}
	return (0);
}
