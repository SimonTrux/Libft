# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:48:46 by struxill          #+#    #+#              #
#    Updated: 2018/11/09 19:32:23 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC_STR	= ft_strcmp.c ft_strdup.c ft_strlen.c ft_strcpy.c ft_strncpy.c
SRC_MEM	= ft_memset.c ft_bzero.c
SRC_IS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
SRC_COV	= ft_toupper.c ft_tolower.c ft_atoi.c
SRC_ADD	= ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c ft_itoa.c
SRC_PER	= ft_putchar2.c ft_putstr2.c ft_isupper.c ft_islower.c ft_sqrt.c ft_isspace.c 
SOURCES	= $(SRC_STR) $(SRC_MEM) $(SRC_IS) $(SRC_COV) $(SRC_ADD) $(SRC_PER)
MAIN	= main.c

#OBJ	= $(SOURCES:.c=.o)

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



