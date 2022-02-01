/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimioui <dimioui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:31:00 by dimioui           #+#    #+#             */
/*   Updated: 2022/02/01 16:06:59 by dimioui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include "libft.h"

//	Args to list A
t_list	*argv_to_stack_a(t_list *lst, char **av);
t_list	*ft_lst_init(t_list *lst, int *tab, int len);
t_list	*ft_fill_link(int *tab, int i, int len);
int	ft_get_index(int *tab, int i, int len);
int	*ft_sort_int_tab(int *tab, int size);

#endif
