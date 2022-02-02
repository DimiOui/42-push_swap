/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:54:09 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/02 13:58:34 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa_rra(t_list *stack_a)
{
	ft_sa(stack_a);
	ft_rra(stack_a);
}

void	ft_sa_ra(t_list *stack_a)
{
	ft_sa(stack_a);
	ft_ra(stack_a);
}
