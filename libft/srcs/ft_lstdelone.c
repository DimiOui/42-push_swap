/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:46:15 by dpaccagn          #+#    #+#             */
/*   Updated: 2022/02/01 16:25:50 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (!lst)
		return ;
	if (del)
		del(lst -> content);
	free (lst);
}

/* **************************************************************************
This function deletes one element from the linked list. First we check if
the list exists. If not we exit, then if del exists we delete the content of
the pointed element, and free memory
°************************************************************************** */
