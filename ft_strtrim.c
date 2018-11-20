/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:51:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/20 16:07:24 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_space(char const *s)
{
	size_t sp;
	size_t i;

	i = 0;
	sp = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			sp++;
		i++;
	}
	return (sp);
}

char	*ft_strtrim(char const *s)
{
	size_t	sp;
	char	*retstr;
	size_t	i;
	size_t	j;

	sp = ft_count_space(s);
	if (!(retstr = (char*)malloc(sizeof(char) * (ft_strlen(s) - sp) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i + j])
	{
		while (s[i + j] == ' ' || s[i + j] == '\n' || s[i + j] == '\t')
			j++;
		retstr[i] = s[i + j];
		i++;
	}
	retstr[i + j] = '\0';
	return (retstr);
}
