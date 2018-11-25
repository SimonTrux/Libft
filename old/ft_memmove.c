/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:07:16 by struxill          #+#    #+#             */
/*   Updated: 2018/11/24 18:14:04 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*destination;
	unsigned const char	*source;
	size_t				i;

	i = 0;
	destination = dst;
	source = src;
	if (src < dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len)
		{
			destination[len] = source[len];
			len--;
		}
	}
	return (dst);
}
