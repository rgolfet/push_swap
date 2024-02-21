/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:00:32 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 03:00:43 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_all(long *tab1, long *tab2)
{
	long	tmp;
	size_t	i;

	tmp = tab1[0];
	i = 0;
	while (tab1[i] != 2147483648)
	{
		tab1[i] = tab1[i +1];
		i++;
	}
	i = 0;
	while (tab2[i] != 2147483648)
		i++;
	i++;
	while (i > 0)
	{
		tab2[i] = tab2[i -1];
		i--;
	}
	tab2[i] = tmp;
	return (0);
}

int	ft_push_a(long *taba, long *tabb)
{
	if (tabb[0] == 2147483648)
		return (1);
	ft_push_all(tabb, taba);
	write(1, "pa\n", 3);
	return (1);
}

int	ft_push_b(long *taba, long *tabb)
{
	if (taba[0] == 2147483648)
		return (1);
	ft_push_all(taba, tabb);
	write(1, "pb\n", 3);
	return (1);
}
