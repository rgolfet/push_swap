/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:01:43 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 03:01:44 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(char **argv, int argc, long *tab_a)
{
	size_t	i;

	i = 1;
	while (argv[i])
	{
		if (ft_int(argv[i]) == -1 || ft_size(argv, i) == -1)
			return (write(1, "ERRor\n", 6), -1);
		i++;
	}
	return (0);
}

int	ft_sort_check(long *tab_a, int size_a, int size_b)
{
	size_t	i;

	if (size_a < 1)
		return (0);
	i = 1;
	while (i < (size_a - 1))
	{
		if (tab_a[i] < tab_a[i + 1])
			i++;
		else
			return (-1);
	}
	if (size_b != 0)
		return (-1);
	return (0);
}
