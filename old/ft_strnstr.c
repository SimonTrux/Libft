/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:26:01 by struxill          #+#    #+#             */
/*   Updated: 2018/11/23 20:31:32 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*ptr;
	size_t		len_saved;

	i = 0;
	j = 0;
	len_saved = len;
	if (ft_strcmp(haystack, needle) == ft_strcmp(haystack, ""))
		return ((char*)haystack);
	while (needle[j] && haystack[i] && len)
	{
		while (haystack[i] != needle[j] && haystack[i] && len--)
			i++;
		while (haystack[i] == needle[j] && haystack[i] && needle[j++] && len--)
			i++;
		if (needle[j] == '\0')
		{
			ptr = &(haystack[i - j]);
			return ((char*)ptr);
		}
		j = 0;
		i = ft_strlen(haystack) - --len_saved;
		len = len_saved;
	}
	return (NULL);
}
