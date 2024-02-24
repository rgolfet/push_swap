/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:54:30 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/24 16:40:36 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_pr(long *tabb, long *index)
{
	ft_push_b(index, tabb);
	ft_rotate_b(tabb);
	return (1);
}

size_t	ft_limits(long *tab)
{
	size_t	i;

	i = 0;
	while (tab[i] != 2147483648)
		i++;
	if (i > 0)
		i--;
	if (i < 2)
		return (i);
	else
		return (3);
}

size_t	ft_size_3(long *tab)
{
	size_t	i;

	i = 0;
	while (tab[i] != 2147483648)
		i++;
	i--;
	return (i);
}

size_t	ft_size_tab(long *tab)
{
	size_t	i;

	i = 0;
	if (tab[0] == 2147483648)
		return (0);
	while (tab[i] != 2147483648)
		i++;
	return (i - 1);
}

int	ft_nb_check(long *index)
{
	size_t	i;

	i = 0;
	while (index[i] != 2147483648)
	{
		if (index[i] > index[i + 1] && index[i + 1] != 2147483648)
			return (0);
		i++;
	}
	return (1);
}
