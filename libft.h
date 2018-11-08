/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:09:53 by struxill          #+#    #+#             */
/*   Updated: 2018/11/08 19:53:54 by struxill         ###   ########.fr       */
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
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);

/*
 **MEM FAMILY
*/

/*
 **IS FAMILY
*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
/*
 **CONVERSIONS
*/
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

/*
 **ADDITIONNAL FUNCTIONS
*/
void	ft_putchar2(char c);
void	ft_putstr2(char const *s);
int		ft_isupper(int c);
int		ft_islower(int c);
double	ft_sqrt(double x);
int		ft_isspace(char c);

#endif
