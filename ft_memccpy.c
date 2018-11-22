/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:21:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 20:11:59 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*destination;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	destination = dst;
	source = src;
	if (n == 0)
		return (dst);
	while (n > 0 && source[i] != (unsigned char)c)
	{
		destination[i] = source[i];
		n--;
		i++;
		if (n == 0)
			return (NULL);
	}
	destination[i] = source[i];
	return (&destination[i + 1]);
}
