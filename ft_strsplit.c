/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <struxill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:08:36 by struxill          #+#    #+#             */
/*   Updated: 2018/11/20 21:45:14 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (l);
}

char	**ft_strsplit(char const *s, char c)
{
	char			**tab;
	size_t			i;
	unsigned int	j;
	size_t			wc;

	wc = ft_wc(s, c);
	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * wc + 1)))
		return (NULL);
	while (i < wc)
	{
		while (s[j] == c)
			j++;
		if (!(tab[i] = ft_strsub(s, j, ft_lc(&s[j], c))))
			return (NULL);
		j = j + ft_lc(&s[j], c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
