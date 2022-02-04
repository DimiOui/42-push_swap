/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mybitwise.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:05:13 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/04 14:31:15 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a[10];
	int	i, n, shifted;

	i = 0;
	(void)av;
	n = atoi(av[1]);
	if (ac > 2)
	{
		for (i = 0; n > 0; i++)
		{
			a[i] = n % 2;
			n = n / 2;
		}
		printf("%d in binary : ", atoi(av[1]));
		for (i = i - 1; i >= 0; i--)
		{
			printf("%d", a[i]);
		}
		printf("\n");
		n = atoi(av[1]);
		shifted = n >> atoi(av[2]);
		printf("shift : %d >> %d = %d\n", n, atoi(av[2]), shifted);
	}
	return (0);
}
