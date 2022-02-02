/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:38:39 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 15:12:15 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_push_linkexists(t_list **stack_a, t_list **stack_b)
{
	*stack_a = (*stack_a)->next;
	if (!*stack_b)
	{
		*stack_b = (*stack_a)->prev;
		(*stack_b)->next = NULL;
	}
	else
	{
		(*stack_a)->prev->next = *stack_b;
		(*stack_b)->prev = (*stack_a)->prev;
		*stack_b = (*stack_b)->prev;
	}
	(*stack_a)->prev = NULL;
}

void	ft_push_newlink(t_list **stack_a, t_list **stack_b)
{
	(*stack_b)->prev = *stack_a;
	(*stack_a)->next = *stack_b;
	*stack_b = (*stack_b)->prev;
	*stack_a = NULL;
}

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
	{
		if ((*stack_a)->next)
			ft_push_linkexists(stack_a, stack_b);
		else
			ft_push_newlink(stack_a, stack_b);
		ft_putstr_fd("pb\n", 1);
	}
}

void	ft_push_a(t_list **stack_b, t_list **stack_a)
{
	if (*stack_b)
	{
		if ((*stack_b)->next)
			ft_push_linkexists(stack_b, stack_a);
		else
			ft_push_newlink(stack_b, stack_a);
		ft_putstr_fd("pa\n", 1);
	}
}
