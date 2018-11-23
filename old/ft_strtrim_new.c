/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:51:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/23 17:54:02 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>



#include <stdio.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

size_t	ft_front_sp(const char *s)
{
	size_t	i;

	i = 0;
	while (ft_is_space(s[i]))
		i++;
	printf("espaces devant la chaine : %zu\n", i);
	return (i);
}

size_t	ft_end_sp(const char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (ft_is_space(s[len - 1]))
	{
		len--;
		i++;
	}
	printf("espaces derriere la chaine : %zu\n", i);
	return (i);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*retstr;
	size_t	spaces;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	spaces = ft_front_sp(s) + ft_end_sp(s);
	len = ft_strlen(s) - spaces;
	printf("longueur a malloc : %zu\n", len + 1);
	if (!(retstr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	retstr[len] = '\0';
	while (ft_is_space(s[i]))
	{
		i++;
		printf("espace skip au debut de s : %zu\n", i);
	}	
	while (j < len)
	{
		retstr[j] = s[i];
		printf("retstr[%zu] = %c, s[%zu] = %c\n", j, retstr[j], i, s[i]);
		j++;
		i++;
	}
	return (retstr);
}
