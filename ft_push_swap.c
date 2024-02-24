/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:53:10 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/24 16:41:36 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_fill(long *tab_a, int argc, char **argv)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	tab_a = malloc(sizeof(long) * argc);
	if (!tab_a)
		return (NULL);
	while (i < argc)
	{
		tab_a[j] = ft_latoi(argv[i]);
		j++;
		i++;
	}
	return (tab_a);
}

long	*ft_stack_2(int argc)
{
	long	*tab2;
	int		i;

	i = 0;
	tab2 = malloc(sizeof(long) * (argc));
	if (!tab2)
		return (NULL);
	while (i < (argc))
	{
		tab2[i] = 0;
		i++;
	}
	tab2[0] = 2147483648;
	return (tab2);
}

void	ft_free(long *tab1, long *tab2, long *tab3)
{
	free(tab1);
	free(tab2);
	free(tab3);
}

int	main(int argc, char **argv)
{
	long	*tab_b;
	long	*tab_a;
	long	*index;

	tab_a = NULL;
	if (argc < 2)
		return (-1);
	tab_a = ft_fill(tab_a, argc, argv);
	tab_b = ft_stack_2(argc);
	if (tab_a == NULL || tab_b == NULL)
		return (ft_free(tab_a, tab_b, NULL), -1);
	if (ft_overflow_(tab_a, argc) == -1
		|| ft_double(tab_a, argc) == -1 || ft_check(argv) == -1)
		return (ft_free(tab_a, tab_b, NULL), write(2, "ErrOr\n", 6), -1);
	if (argc < 4)
		return (ft_sort_3(tab_a), ft_free(tab_a, tab_b, NULL), -1);
	index = ft_index(tab_a, argc);
	if (index == NULL)
		return (ft_free(tab_a, tab_b, index), -1);
	if (ft_nb_check(index) == 1)
		return (ft_free(tab_a, tab_b, index), 0);
	ft_sort_b(tab_b, index);
	ft_sort_a(index, tab_b);
	ft_free(index, tab_a, tab_b);
	return (0);
}
