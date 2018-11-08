# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:48:46 by struxill          #+#    #+#              #
#    Updated: 2018/11/08 16:51:09 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC_STR	= ft_putchar.c ft_putchar2.c ft_putstr.c ft_putstr2.c \
		  ft_putnbr.c ft_strcmp.c ft_strdup.c ft_strlen.c
SRC_ADD	= ft_sqrt.c
SOURCES	= $(SRC_STR) $(SRC_ADD)
MAIN	= main.c

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SOURCES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) a.out

re: fclean all

main: 
	gcc $(CFLAGS) $(MAIN) -L. -lft
