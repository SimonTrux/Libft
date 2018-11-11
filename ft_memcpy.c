/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:12:25 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 20:09:12 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *destination;
	const char *source;

	destination = dst;
	source = src;
	while (n > 0)
	{
		*destination++ = *source++;
		n--;
	}
	return (dst);
}
