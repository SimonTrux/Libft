/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:09:53 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 20:01:43 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H
# define __LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/*
 **STR FAMILY
*/
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
/*
 **MEM FAMILY
*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
/*
 **IS FAMILY
*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
/*
 **CONVERSIONS
*/
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
/*
 **ADDITIONNAL
*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

char	*ft_itoa(int c);
/*
 **MY FUNCTIONS
*/
void	ft_putchar2(char c);
void	ft_putstr2(char const *s);
int		ft_isupper(int c);
int		ft_islower(int c);
double	ft_sqrt(double x);
int		ft_isspace(char c);
#endif
