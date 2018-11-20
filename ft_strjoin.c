/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:44:58 by struxill          #+#    #+#             */
/*   Updated: 2018/11/20 16:07:43 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*retstr;
	size_t	maxlen;

	i = 0;
	j = 0;
	maxlen = ft_strlen(s1) + ft_strlen(s2);
	if (!(retstr = (char*)malloc(sizeof(char) * maxlen + 1)))
		return (NULL);
	while (s1[i])
	{
		retstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		retstr[i + j] = s2[j];
		j++;
	}
	retstr[i + j] = '\0';
	return (retstr);
}
