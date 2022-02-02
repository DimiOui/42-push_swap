/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:08:12 by dpaccagn          #+#    #+#             */
/*   Updated: 2022/02/02 17:26:11 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi_strict(const char *str, int *result)
{
	int	sign;

	sign = 1;
	*result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (ft_isnum(*str))
	{
		if (((int)((unsigned int)*result * 10) / 10) != *result)
			return (1);
		*result = (*result * 10) + (*str - '0');
		str++;
	}
	if (*result - (sign < 0) < 0 && *result)
		return (1);
	*result = *result * sign;
	return (0);
}
