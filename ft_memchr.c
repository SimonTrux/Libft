/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:49:44 by struxill          #+#    #+#             */
/*   Updated: 2018/11/24 18:17:28 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i] != (unsigned char)c && n)
	{
		i++;
		n--;
	}
	if (n == 0)
		i--;
	if (str[i] == (unsigned char)c)
		return ((void*)str);
	else
		return (NULL);
}
