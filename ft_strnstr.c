/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:59:57 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 20:13:37 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*ptr;

	i = 0;
	j = 0;
	if (ft_strcmp(haystack, needle) == ft_strcmp(haystack, ""))
		return ((char*)haystack);
	while (haystack[i] != needle[j] && haystack[i])
		i++;
	while (haystack[i] == needle[j] && haystack[i] && needle[j] && len)
	{
		i++;
		j++;
		len--;
	}
	if (needle[j] == '\0')
	{
		ptr = &(haystack[i - j]);
		return ((char*)ptr);
	}
	else
		return (NULL);
}
