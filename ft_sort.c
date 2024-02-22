/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:54:38 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/22 14:12:44 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_sort_b(long *tabb, long *index) TRUE
// {
// 	long	count;
// 	float	chunk;
// 	long	siz;

// 	count = 0;
// 	chunk = ft_chunk(index);
// 	siz = ft_size_3(index);
// 	while (ft_size_3(index) >= 3)
// 	{
// 		if (index[0] == siz || index[0] == (siz - 1) || index[0] == (siz - 2))
// 			ft_rotate_a(index);
// 		else if (index[0] <= count)
// 			ft_push_b(index, tabb);
// 		else if (index[0] <= (count + chunk))
// 			ft_pr(tabb, index);
// 		else
// 			ft_rotate_a(index);
// 		count++;
// 	}
// 	ft_sort_3(index);
// 	return (1);
// }

void	ft_sort_b(long *tabb, long *index)
{
	long	count;
	float	chunk;
	long	siz;

	count = 0;
	chunk = ft_chunk(index);
	siz = ft_size_3(index);
	while (ft_size_3(index) >= 3)
	{
		if (index[0] == siz || index[0] == (siz - 1) || index[0] == (siz - 2))
			ft_rotate_a(index);
		else if (index[0] <= count)
		{
			ft_push_b(index, tabb);
			count++;
		}
		else if (index[0] <= (count + chunk))
		{
			ft_pr(tabb, index);
			count++;
		}
		else
			ft_rotate_a(index);
	}
	ft_sort_3(index);
}

size_t	ft_reverse_sort_a(long *index, long *tabb)
{
	long	cmp;

	cmp = ft_size_tab(tabb);
	if (tabb[0] == cmp)
	{
		ft_push_a(index, tabb);
		cmp--;
	}
	else
		ft_reverse_rotate_b(tabb);
	return (1);
}

size_t	ft_sort_a(long *index, long *tabb)
{
	long	cmp;

	cmp = ft_size_tab(tabb);
	while (tabb[0] != 2147483648)
	{
		if (tabb[0] == cmp)
		{
			ft_push_a(index, tabb);
			cmp--;
		}
		if (ft_up_find(tabb) == 2 && tabb[0] != cmp)
			ft_reverse_rotate_b(tabb);
		else if (ft_up_find(tabb) == 1 && tabb[0] != cmp)
			ft_rotate_b(tabb);
	}
	return (1);
}

int	ft_sort_3(long *tab)
{
	if (tab[1] == 2147483648)
		return (1);
	if (tab[2] == 2147483648)
	{
		if (tab[0] > tab[1])
			return (ft_swap_a(tab));
		return (1);
	}
	while (tab[0] > tab[1] || tab[1] > tab[2])
	{
		if (tab[0] > tab[1])
			ft_swap_a(tab);
		if (tab[1] > tab[2])
			ft_reverse_rotate_a(tab);
	}
	return (1);
}

void	ft_sort_2(long *tab)
{
	while (tab[0] > tab[1])
		ft_swap_a(tab);
}
