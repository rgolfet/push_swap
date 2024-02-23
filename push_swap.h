/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:49:08 by rgolfett          #+#    #+#             */
/*   Updated: 2024/02/22 14:34:58 by rgolfett         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

long long	ft_latoi(const char *str);
long		*ft_fill(long *tab_a, int argc, char **argv);
int			ft_overflow_(long *tab, int argc);
int			ft_int(char *arg);
int			ft_check(char **argv);
size_t		ft_strlen(char *str);
int			ft_size(char **argv, ssize_t i);
int			ft_swap(long *nb1, long *nb2);
int			ft_swap_a(long *tab);
int			ft_swap_b(long *tab);
int			ft_sswap(long *taba, long *tabb);
int			ft_push_all(long *tab1, long *tab2);
int			ft_push_a(long *taba, long *tabb);
int			ft_push_b(long *taba, long *tabb);
int			ft_rotate(long *tab);
int			ft_rotate_a(long *tab);
int			ft_rotate_b(long *tab);
int			ft_rotate_all(long *taba, long *tabb);
int			ft_reverse_rotate(long *tab);
int			ft_reverse_rotate_a(long *tab);
int			ft_reverse_rotate_b(long *tab);
int			ft_reverse_rotate_all(long *taba, long *tabb);
int			ft_sort_check(long *tab_a, int size_a, int size_b);
int			ft_double(long *tab, int argc);
long		*ft_index(long *tab, ssize_t size);
size_t		ft_pr(long *tabb, long *index);
void		ft_sort_b(long *tabb, long *index);
float		ft_chunk(long *taba);
long		*ft_stack_index_b(int argc);
int			ft_up_find(long *tab);
size_t		ft_sort_a(long *index, long *tabb);
size_t		ft_reverse_sort_a(long *index, long *tabb);
size_t		ft_size_tab(long *tab);
size_t		ft_limits(long *tab);
size_t		ft_size_3(long *tab);
int			ft_sort_3(long *tab);
int			ft_nb_check(long *index);

#endif
