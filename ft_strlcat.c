/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:47:46 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 16:07:21 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t totallen;
	int max;

	i = 0;
	j = 0;
	max = (size - ft_strlen(dst) - 1);
	totallen = ft_strlen(dst) + ft_strlen(src);
	while (dst[i])
		i++;
	while (src[j] && max)
	{
		dst[i++] = src[j++];
		max--;
	}
	if (size - max)
	{
		dst[i] = '\0';
		return (totallen);
	}
	else
		return (size);
}
