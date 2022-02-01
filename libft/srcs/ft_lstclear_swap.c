/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:15:03 by dpaccagn          #+#    #+#             */
/*   Updated: 2022/02/01 15:32:29 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*ptr;

	if (!*lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = NULL;
		ptr = tmp;
	}
	*lst = (NULL);
}

/* **************************************************************************
This function goes through all the links of your linked list and deletes all
of its content then frees all the memory allocated. (with lstdelone).
It then creates a pointer to NULL at the beginning of the list
°************************************************************************** */
