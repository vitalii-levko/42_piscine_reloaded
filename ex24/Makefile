# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlevko <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/02 16:06:07 by vlevko            #+#    #+#              #
#    Updated: 2017/11/02 16:10:36 by vlevko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putchar.o ft_strcmp.o ft_strlen.o ft_swap.o

HEAD = includes

LIB = libft.a

all:
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(HEAD)
	ar rc $(LIB) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all
