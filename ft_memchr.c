/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:49:44 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 15:06:47 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] != (unsigned char)c && n)
	{
		i++;
		n--;
	}
	if (str[i] == (unsigned char)c)
		return ((void*)str);
	else
		return (NULL);
}
