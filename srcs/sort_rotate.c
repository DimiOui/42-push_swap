/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:39:29 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 14:39:37 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
