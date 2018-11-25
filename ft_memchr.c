/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:49:44 by struxill          #+#    #+#             */
/*   Updated: 2018/11/25 21:38:58 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;

	uc = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i] != uc && str[i] && i < n - 1)
		i++;
	if (str[i] == uc)
		return ((void*)&str[i]);
	else
		return (NULL);
}
