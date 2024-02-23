# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgolfett <rgolfett@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 03:07:58 by rgolfett          #+#    #+#              #
#    Updated: 2024/02/23 14:19:56 by rgolfett         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ft_check.c \
      ft_latoi.c \
      ft_parsing.c \
      ft_push.c \
      ft_push_swap.c \
      ft_reverse_rotate.c \
      ft_rotate.c \
      ft_strlen.c \
      ft_swap.c \
      ft_algorithm.c \
      ft_index.c \
      ft_sort.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

DEPS = push_swap.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
