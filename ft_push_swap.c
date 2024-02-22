/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:53:10 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/21 05:17:32 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*ft_fill(int argc, char **argv)
{
	long		*tab;
	int		i;
	size_t		j;

	i = 1;
	j = 0;
	tab = malloc(sizeof(long) * argc);
	if (!tab)
		return (NULL);
	while (i < argc)
	{
		tab[j] = ft_latoi(argv[i]);
		j++;
		i++;
	}
	return (tab);
}

long	*ft_stack_2(int argc)
{
	long	*tab2;
	int	i;

	i = 0;
	tab2 = malloc(sizeof(long) * (argc));
	while (i < (argc))
	{
		tab2[i] = 0;
		i++;
	}
	tab2[0] = 2147483648;
	return (tab2);
}

int	ft_less_than_four(long *tab)
{
	return (ft_sort_3(tab));
}

int	main(int argc, char **argv)
{
	long	*tab_b;
	long	*tab_a;
	long	*index;

	if (argc < 2)
		return (write(2, "ErRoR\n", 6), -1);
	tab_a = ft_fill(argc, argv);
	if (ft_overflow_(tab_a, argc) == -1 || ft_double(tab_a, argc) == -1)
		return (write(2, "ErrOr\n", 6), -1);
	if (ft_check(argv))
		return (-1);
	if (argc < 4)
		return (ft_less_than_four(tab_a));
	index = ft_index(tab_a, argc);
	if (ft_nb_check(index) == 1)
		return (1);
	tab_b = ft_stack_2(argc);
	ft_sort_b(tab_b, index);
	ft_sort_a(index, tab_b);

	// int i = 0;
	// while (index[i] != 2147483648)
	// {
	// 	printf("index[%i] = %zi\n", i, index[i]);
	// 	i++;
	// }
	free(tab_b);
	free(tab_a);
	free(index);
	return (1);
}
