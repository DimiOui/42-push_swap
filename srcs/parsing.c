/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:00 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/01 16:23:33 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			swap = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = swap;
			i = 0;
		}
		i++;
	}
	return (tab);
}

int	ft_get_index(int *tab, int i, int len)
{
	int	*tmp_tab;
	int	j;
	int	ret;

	j = 0;
	tmp_tab = malloc(sizeof(int) * len);
	if (!tmp_tab)
		return (-1);
	while (j < len)
	{
		tmp_tab[j] = tab[j];
		j++;
	}
	tmp_tab = ft_sort_int_tab(tmp_tab, len);
	j = 0;
	while (j < len)
	{
		if (tmp_tab[j] == tab[i])
			ret = j;
		j++;
	}
	free(tmp_tab);
	return (ret);
}

t_list	*ft_fill_link(int *tab, int i, int len)
{
	t_list *link;
	int		index;

	index = ft_get_index(tab, i, len);
	if (index == -1)
		return (NULL);
	link = malloc(sizeof (t_list));
	if (!link)
		return (NULL);
	link->content = tab[i];
	link->index = index;
	link->next = NULL;
	link->prev = NULL;
	return (link);
}

t_list	*ft_lst_init(t_list *lst, int *tab, int len)
{
	int	i;
	t_list	*new_link;

	new_link = NULL;
	i = 0;
	while (i < len)
	{
		new_link = ft_fill_link(tab, i, len);
		if (!new_link)
		{
			ft_lstclear_swap(&lst);
			return (NULL);
		}
		ft_lstadd_back_swap(&lst, new_link);
		i++;
	}
	return (lst);
}

t_list	*argv_to_stack_a(t_list *lst, char **av)
{
	int	*tab;
	int	i;
	int	len;

	av++;
	len = 0;
	while (av[len])
		len++;
	tab = malloc(sizeof(int *) * len);
	if (!tab)
		return (NULL);
	i = 0;
	while (av[i])
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	lst = ft_lst_init(lst, tab, len);
	free(tab);
	return (lst);
}
