/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:47:46 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 17:42:37 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

//size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t totallen;
	int max;

	i = ft_strlen(dst); 
	j = 0;
	max = (size - ft_strlen(dst) - 1);
	totallen = ft_strlen(dst) + size;
	while (src[j] && max)
	{
		dst[i++] = src[j++];
		max--;
	}
	if (size - max)
	{
		dst[i] = '\0';
		return (totallen);
	}
	else
		return (size);
}
/*
int		main(int ac, char **av)
{
	if (ac < 2)
		printf("Not enough arguments\n\n");
	printf("my  strlcat : %zu\n", ft_strlcat(av[1], av[2], 3));
	printf("ori strlcat : %lu\n", strlcat(av[1], av[2], 3));
	return (0);
}
