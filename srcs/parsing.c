/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:19:57 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/01 19:02:42 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '-' || str[i + 1] == '\0'
				|| str[i + 1] >= '0' || str[i + 1] <= '9')
				i++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				i++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_nb(int i, char *str)
{
	int	check;

	check = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0'
				||(str[i + 1] >= '0' && str[i + 1] <= '9'))
			{
				i++;
				check++;
			}
			else
				return (0);
		}
		i++;
	}
	if (check == 0)
		return (0);
	return (1);
}

int	ft_check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (av[j] == av[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_order(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	av++;
	while (j < (ac - 1))
	{
		if (av[i] < av[j])
		{
			i++;
			j++;
		}
		return (1);
	}
	return (0);
}
