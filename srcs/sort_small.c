/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:20:59 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 15:53:53 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_resolution3(t_list *stack_a)
{
	if (stack_a->index > stack_a->next->index
		&& stack_a->index > stack_a->next->next->index
		&& stack_a->next->index > stack_a->next->next->index)
		ft_sa_rra(stack_a);
	else if (stack_a->index > stack_a->next->index
		&& stack_a->index > stack_a->next->next->index
		&& stack_a->next->index < stack_a->next->next->index)
		ft_ra(stack_a);
	else if (stack_a->index > stack_a->next->index
		&& stack_a->index < stack_a->next->next->index
		&& stack_a->next->index < stack_a->next->next->index)
		ft_sa(stack_a);
	else if (stack_a->index < stack_a->next->index
		&& stack_a->index < stack_a->next->next->index
		&& stack_a->next->index > stack_a->next->next->index)
		ft_sa_ra(stack_a);
	else if (stack_a->index < stack_a->next->index
		&& stack_a->index > stack_a->next->next->index
		&& stack_a->next->index > stack_a->next->next->index)
		ft_rra(stack_a);
	else
		return ;
}

void	ft_resolution4(t_list *stack_a, t_list *stack_b)
{
	ft_push_b(&stack_a, &stack_b);
	ft_resolution3(stack_a);
	while (ft_lstsize(stack_a) < 4)
	{
		if ((stack_b->index == stack_a->index - 1)
			|| (stack_b->index == 3 && stack_a->index == 0))
			ft_push_a(&stack_b, &stack_a);
		else
			ft_ra(stack_a);
	}
	while (stack_a->index != 0)
		ft_ra(stack_a);
}

void	ft_resolution5(t_list *stack_a, t_list *stack_b)
{
	ft_push_b(&stack_a, &stack_b);
	ft_push_b(&stack_a, &stack_b);
	ft_resolution3(stack_a);
	if ((stack_b->index == stack_b->next->index - 1)
		|| (stack_b->index == 4 && stack_b->next->index == 0))
		ft_sb(stack_b);
	while (ft_lstsize(stack_a) < 5)
	{
		if ((stack_b->index == stack_a->index - 1)
			|| (stack_b->index == 4 && stack_a->index == 0))
			ft_push_a(&stack_b, &stack_a);
		else
			ft_ra(stack_a);
	}
	if (stack_a->index > ft_lstsize(stack_a) / 2)
		while (stack_a->index)
			ft_ra(stack_a);
	else
		while (stack_a->index)
			ft_rra(stack_a);
}
