/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:43:06 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 18:05:56 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_dst;
	size_t len_src;
	size_t max;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	max = size - 1;
	while (src[j] && i < max)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (len_dst > size)
		return (len_src + size);
	return (len_dst + len_dst);
}
