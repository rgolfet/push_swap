/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:58:45 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/23 14:21:36 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_int(char *arg)
{
	size_t	i;

	i = 0;
	while (arg[i])
	{
		if ((arg[i] == '-' && arg[i +1]) || (arg[i] == '+' && arg[i +1]))
			i++;
		if (!(arg[i] >= 48 && arg[i] <= 57))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_overflow_(long *tab, int argc)
{
	int	i;

	i = 0;
	while (i < (argc - 1))
	{
		if (tab[i] < -2147483648 || tab[i] > 2147483647)
		{
			return (-1);
		}
		i++;
	}
	tab[i] = 2147483648;
	return (0);
}

int	ft_size(char **argv, ssize_t i)
{
	if (ft_strlen(argv[i]) >= 14)
		return (-1);
	return (0);
}

int	ft_double(long *tab, int argc)
{
	int		i;
	int		j;
	long	cmpr;

	i = 0;
	j = 0;
	cmpr = 0;
	while (j < (argc - 1))
	{
		cmpr = tab[j];
		i++;
		while (i < (argc - 1))
		{
			if (cmpr == tab[i])
				return (-1);
			i++;
		}
		j++;
		i = j;
	}
	return (0);
}
