/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:08:36 by struxill          #+#    #+#             */
/*   Updated: 2018/11/20 17:26:35 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_wc(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	size_t	flag;

	i = 0;
	wc = 0;
	while (s[i])
	{
		flag = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			flag = 1;
		}
		if (flag == 1)		
			wc++;
	}
	return (wc);
}

size_t	ft_lc(char const *s, char c)
{
	size_t l;

	l = 0;
	while (*s && *s == c)
		*s++;
	while (*s && *s != c)
	{
		*s++;
		l++;
	}
	return (l);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	wc;

	wc = ft_wc(s, c);
	i = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * wc + 1)))
		return (NULL);
	while (i < wc)
	{
		j = 0;
		if(!(tab[i] = (char*)malloc(sizeof(char) * ft_lc(&s, c) + 1)))
			return (NULL);
		while (*s != c)
		{
			tab[i][j++] = *s++;
			tab[i][j] = '\0';
		}
		i++;
	}
	tab[i][0] = '\0';
	return (tab);
}

int		main(int ac, char **av)
{
	(void)ac;
	size_t wc;

	printf("nb de mots : %u\n", ft_wc(av[1], ' '));
	pr
	return (0);
}
