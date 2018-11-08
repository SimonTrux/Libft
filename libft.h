/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:09:53 by struxill          #+#    #+#             */
/*   Updated: 2018/11/08 16:53:49 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H
# define __LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/*STR FAMILY*/
void	ft_putchar(char c);
void	ft_putchar2(char c);
void	ft_putstr(char const *s);
void	ft_putstr2(char const *s);
void	ft_putnbr(int n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src); 
size_t	ft_strlen(const char *s);

/*MEM FAMILY*/
/*IS FAMILY*/
/*CONVERSIONS*/
//int		toupper(int c);
//int		tolower(int c);
/*ADDITIONNAL FUNCTIONS*/
double	ft_sqrt(double x);

#endif
