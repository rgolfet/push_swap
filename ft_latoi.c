/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_latoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 03:03:30 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 03:04:16 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_overflow(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

static long long	ft_calc(char *str, int i, int sign)
{
	long long	nbr;

	nbr = 0;
	if (!(str[i] >= 48 && str[i] <= 57))
		return (0);
	while (str[i] && str[i] == 48)
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		if (nbr * 10 + (str[i] - 48) < nbr)
			return (ft_overflow(sign));
		nbr *= 10;
		nbr += ((str[i] - 48));
		i++;
	}
	return (nbr);
}

long long	ft_latoi(const char *str)
{
	int				i;
	char			*str2;
	long long		nbr1;
	int				sign;

	i = 0;
	str2 = (char *) str;
	nbr1 = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	nbr1 = ft_calc(str2, i, sign);
	return (nbr1 * sign);
}
