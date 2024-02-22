/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:06:24 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 04:56:43 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(long *nb1, long *nb2)
{
	long	tmp;

	tmp = *nb1;
	*nb1 = *nb2;
	*nb2 = tmp;
	return (0);
}

int	ft_swap_a(long *tab)
{
	if (tab[0] == 2147483648 || tab[1] == 2147483648)
		return (1);
	ft_swap(&tab[0], &tab[1]);
	return (write(1, "sa\n", 3), 1);
}

int	ft_swap_b(long *tab)
{
	if (tab[0] == 2147483648 || tab[1] == 2147483648)
		return (1);
	ft_swap(&tab[0], &tab[1]);
	return (write(1, "sb\n", 3), 1);
}

int	ft_sswap(long *taba, long *tabb)
{
	if ((taba[0] == 2147483648 || taba[1] == 2147483648 
	|| tabb[1] == 2147483648) && tabb[0] == 2147483648)
		return (write(1, "ss = Impossible\n", 16), 0);
	ft_swap(&taba[0], &taba[1]);
	return (write(1, "ss\n", 3), 1);
}
