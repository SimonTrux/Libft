# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:48:46 by struxill          #+#    #+#              #
#    Updated: 2018/11/08 19:53:51 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC_STR	= ft_putchar.c ft_putstr.c ft_putnbr.c ft_strcmp.c ft_strdup.c ft_strlen.c
SRC_IS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c
SRC_COV	= ft_toupper.c ft_tolower.c ft_atoi.c
SRC_ADD	= ft_putchar2.c ft_putstr2.c ft_isupper.c ft_islower.c ft_sqrt.c ft_isspace.c
SOURCES	= $(SRC_STR) $(SRC_IS) $(SRC_COV) $(SRC_ADD)
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
