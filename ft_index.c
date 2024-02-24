/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:57:32 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/24 16:20:24 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_stack_index_b(int argc)
{
	long	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(long) * (argc));
	if (!tab)
		return (NULL);
	while (i < (argc))
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

long	*ft_index(long *tab, ssize_t size)
{
	long		*index;
	ssize_t		i;
	ssize_t		j;
	ssize_t		ind;

	index = malloc(sizeof(long) * (size));
	if (!index)
		return (NULL);
	i = -1;
	j = 0;
	ind = 0;
	while (tab[++i] != 2147483648)
	{
		while (tab[++j] != 2147483648)
		{
			if (tab[i] > tab[j])
				ind++;
		}
		index[i] = ind;
		j = -1;
		ind = 0;
	}
	index[i] = 2147483648;
	return (index);
}

float	ft_chunk(long *taba)
{
	size_t	i;
	float	chunk;

	i = 0;
	while (taba[i] != 2147483648)
		i++;
	chunk = (((i * i) * 0.000000053) + (i * 0.03) + 14.5);
	return (chunk);
}

int	ft_up_find(long *tab)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	while (tab[i] != 2147483648)
		i++;
	if (i > 0)
		i--;
	while (tab[j] != i)
		j++;
	if (j >= (i / 2))
		return (2);
	return (1);
}
