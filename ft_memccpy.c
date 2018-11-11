/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 19:21:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 20:09:07 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = src;
	while (n > 0 && *source != c)
	{
		*destination++ = *source++;
		n--;
		if (n == 0)
			return (NULL);
	}
	*destination++ = *source;
	return (destination);
}
