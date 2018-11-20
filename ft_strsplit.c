/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:08:36 by struxill          #+#    #+#             */
/*   Updated: 2018/11/20 19:12:31 by struxill         ###   ########.fr       */
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
	while (s[i] != '\0')
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
		ft_putendl("Un mot de plus");
	}
	return (wc);
}

size_t	ft_lc(char const *s, char c)
{
	size_t	l;
	size_t	i;

	l = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		l++;
	}
	printf("There is %zu letter(s)\n", l);
	return (l);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t			i;
	unsigned int	j;
	size_t			wc;

	wc = ft_wc(s, c);
	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * wc + 1)))
	{
		free(tab);
		return (NULL);
	}
	while (i < wc)
	{
		while (s[j] == c)
			j++;
		if(!(tab[i] = ft_strsub(s, j, ft_lc(&s[j], c))))
		{
			free(tab[i]);
			return (NULL);
		}
		printf("j = %u\n", j);
		printf("There is %zu letter(s)\n", ft_lc(&s[j], c));
		j = j + ft_lc(&s[j], c);
		printf("i : %zu, j : %u, tab[i] : %s\n", i, j, tab[i]);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
/*
int		main(int ac, char **av)
{
	(void)ac;
	size_t	wc;
	char	**tableau;
	int i;

	i = 0;
	printf("nb de mots : %zu\n", ft_wc(av[1], ' '));
	tableau = ft_strsplit(av[1], ' ');
	wc = ft_wc(av[1], ' ');
	while (tableau)
	{
		printf("Mot %d : %s\n", i, tableau[i]);
		i++;
	}
	return (0);
} */
