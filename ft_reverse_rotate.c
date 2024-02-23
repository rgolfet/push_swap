/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:04:41 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/23 14:22:39 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverse_rotate(long *tab)
{
	long	temp;
	size_t	i;

	i = 0;
	while (tab[i] != 2147483648)
		i++;
	i--;
	temp = tab[i];
	while (i > 0)
	{
		tab[i] = tab[i - 1];
		i--;
	}
	tab[0] = temp;
	return (1);
}

int	ft_reverse_rotate_a(long *tab)
{
	if (tab[1] == 2147483648)
		return (1);
	ft_reverse_rotate(tab);
	return (write(1, "rra\n", 4), 1);
}

int	ft_reverse_rotate_b(long *tab)
{
	if (tab[1] == 2147483648)
		return (1);
	ft_reverse_rotate(tab);
	return (write(1, "rrb\n", 4), 1);
}

int	ft_reverse_rotate_all(long *taba, long *tabb)
{
	if (taba[0] != 2147483648 && taba[1] != 2147483648)
		ft_reverse_rotate(taba);
	if (tabb[0] != 2147483648 && tabb[1] != 2147483648)
		ft_reverse_rotate(tabb);
	if (taba[0] != 2147483648 && (taba[1] != 2147483648
			|| tabb[0] != 2147483648) && tabb[1] != 2147483648)
		return (write(1, "rrr Impossible\n", 15), 0);
	return (write(1, "rrr\n", 4), 1);
}
