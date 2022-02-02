/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:13:10 by dpaccagn          #+#    #+#             */
/*   Updated: 2022/02/02 18:04:56 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int *(*f)(int), void (*del)(int))
{
	t_list	*buffer;
	t_list	*newlist;

	newlist = NULL;
	while (lst)
	{
		buffer = ft_lstnew(*(*f)(lst -> content));
		if (!buffer)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, buffer);
		buffer = buffer -> next;
		lst = lst -> next;
	}
	return (newlist);
}

/* **************************************************************************
This function itters through the list taken as a parameter et applies the
f function to all of its content. It then creates a new list with the newlistult
of the application of the f function on each links of the linked list.

In fact we use a buffer to do all our modifications, then we add it to the
empty newlist with addback, all of this while lst exists. We protect our new
list as if the buffer is not here or if the malloc fails at some point
we'll clear all of the newlist
°************************************************************************** */
