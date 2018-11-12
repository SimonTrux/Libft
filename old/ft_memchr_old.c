/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:32:11 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 14:49:09 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *string;

	string = s;
	if (s)
	{
		while (*string != c && *string && n--)
			*string++;
	}
	if (*string == c)
		return ((void*)*string);
	else
		return (NULL);
}
