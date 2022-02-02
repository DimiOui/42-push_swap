/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:20:59 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 14:17:22 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa(t_list *stack_a)
{
	ft_swap(&(stack_a->content), &(stack_a->next->content));
	ft_swap(&(stack_a->index), &(stack_a->next->index));
	ft_putstr_fd("sa\n", 1);
}

void	ft_ra(t_list *stack_a)
{
	int	content_tmp;
	int	index_tmp;

	content_tmp = stack_a->content;
	index_tmp = stack_a->index;
	while (stack_a->next)
	{
		stack_a->content = stack_a->next->content;
		stack_a->index = stack_a->next->index;
		stack_a = stack_a->next;
	}
	stack_a->content = content_tmp;
	stack_a->index = index_tmp;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rra(t_list *stack_a)
{
	int	content_tmp;
	int	index_tmp;

	stack_a = ft_lstlast(stack_a);
	content_tmp = stack_a->content;
	index_tmp = stack_a->index;
	while (stack_a->prev)
	{
		stack_a->content = stack_a->prev->content;
		stack_a->index = stack_a->prev->index;
		stack_a = stack_a->prev;
	}
	stack_a->content = content_tmp;
	stack_a->index = index_tmp;
	ft_putstr_fd("rra\n", 1);
}

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
