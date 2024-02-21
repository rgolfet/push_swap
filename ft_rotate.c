/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:59:53 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 02:59:54 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(long *tab)
{
	long	temp;
	size_t	i;

	i = 0;
	temp = tab[0];
	while (tab[i + 1] != 2147483648)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = temp;
	return (1);
}

int	ft_rotate_a(long *tab)
{
	if (tab[0] == 2147483648 || tab[1] == 2147483648)
		return (1);
	ft_rotate(tab);
	return (write(1, "ra\n", 3), 1);
}

int	ft_rotate_b(long *tab)
{
	if (tab[0] == 2147483648 || tab[1] == 2147483648)
		return (1);
	ft_rotate(tab);
	return (write(1, "rb\n", 3), 1);
}

int	ft_rotate_all(long *taba, long *tabb)
{
	if (taba[0] != 2147483648 && taba[1] != 2147483648)
		ft_rotate(taba);
	if (tabb[0] != 2147483648 && tabb[1] != 2147483648)
		ft_rotate(tabb);
	return (write(1, "rr\n", 3), 1);
}
