/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 20:07:16 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 18:56:50 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	if (src)
	{
		while (len-- && *source)
			*destination++ = *source++;
	}
	return (dst);
}
