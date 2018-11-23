/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:51:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 19:41:52 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_count_space(char const *s)
{
	size_t sp;
	size_t i;
	size_t len;

	len = ft_strlen(s);
	i = 0;
	sp = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		sp++;
		i++;
	}
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		sp++;
		len--;
	}
	if (sp > len)
		return (len);
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
	while (s[i + j] == ' ' || s[i + j] == '\n' || s[i + j] == '\t')
		j++;
	retstr[ft_strlen(s) - sp + 1] = '\0';
	while (retstr[i])
	{
		retstr[i] = s[i + j];
		i++;
	}
	return (retstr);
}
