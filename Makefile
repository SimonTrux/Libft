# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:48:46 by struxill          #+#    #+#              #
#    Updated: 2018/11/08 15:53:57 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SOURCES	= ft_putchar.c ft_putchar2.c ft_putstr.c ft_putstr2.c ft_putnbr.c
MAIN	= main.c

all:
	gcc -c $(CFLAGS) $(SOURCES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

main: re
	gcc $(CFLAGS) $(MAIN) -L. -lft
