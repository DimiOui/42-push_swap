/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:39:03 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 14:39:04 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pushswap.h"

void	ft_sa(t_list *stack_a)
{
	ft_swap(&(stack_a->content), &(stack_a->next->content));
	ft_swap(&(stack_a->index), &(stack_a->next->index));
	ft_putstr_fd("sa\n", 1);
}
