# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 21:48:46 by struxill          #+#    #+#              #
#    Updated: 2018/11/20 18:26:50 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror
SRC_STR	= ft_strcmp.c ft_strncmp.c		\
		  ft_strdup.c ft_strlen.c ft_strcpy.c ft_strncpy.c	\
		  ft_strcat.c ft_strncat.c							\
		  ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c	
#ft_strlcat.c			\		  
SRC_MEM	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c	\
		  ft_memchr.c ft_memcmp.c
SRC_IS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c 			\
		  ft_isprint.c
SRC_COV	= ft_toupper.c ft_tolower.c ft_atoi.c
SRC_ADD	= ft_memalloc.c	ft_memdel.c ft_strnew.c	ft_strdel.c				\
		  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c			\
		  ft_strmapi.c ft_strequ.c ft_strnequ.c							\
		  ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c			\
		  ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c 			\
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_itoa.c
SRC_PER	= ft_putchar2.c ft_putstr2.c ft_isupper.c ft_islower.c ft_sqrt.c ft_isspace.c 
SOURCES	= $(SRC_STR) $(SRC_MEM) $(SRC_IS) $(SRC_COV) $(SRC_ADD) $(SRC_PER)
MAIN	= main.c

#OBJ	= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	@echo "\033[92mGCC Compilation\033[0m"
	gcc -c $(CFLAGS) $(SOURCES)
	@echo
	@echo "\033[92mLibrary Creation\033[0m"
	ar rc $(NAME) *.o
	@echo
	@echo "\033[92mRanlib\033[0m"
	ranlib $(NAME)
	@echo

clean:
	@echo "\033[92mCleaning .o\033[0m"
	rm -f *.o
	@echo

fclean: clean
	@echo "\033[92mRemoving Library\033[0m"
	rm -f $(NAME) a.out
	@echo

re: fclean all

main: 
	@echo "\033[92mCompiling Main with Library\033[0m"
	gcc $(CFLAGS) $(MAIN) -L. -lft
	@echo
	@echo "\033[92mFinished\033[0m"
	@echo
