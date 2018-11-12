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
	max = size - len_dst - 1;


	while (src[j] && max--)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (size == 0)
		return (
	else
		return (len_dst + src_dst);
}
