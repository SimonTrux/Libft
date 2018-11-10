/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:57:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/09 19:33:27 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_tens_count(int n)
{
	int i;

	i = 0;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;

	len = (ft_tens_count(n) + 1);
	printf("number of digit : %d\n", len);
	if (n < 0)
		len++;
	if (!(number = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
//	number[len] = '\0';
	len--;
	if (n < 0)
	{
		number[0] = '-';
		while (len > 0)
		{
			number[len] = (n % 10) + 48;
			n = (n / 10);
			len--;
		}
	}
	if (n >= 0)
	{
		while (len > 0)
		{
			number[len] = (n % 10) + 48;
			n = (n / 10);
			len--;
		}
	}
	return (number);
}
