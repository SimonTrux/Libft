/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:57:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 19:11:35 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ABS(x) x < 0 ? -x : x

int		ft_digit_count(int n)
{
	int i;

	i = 1;
	while (ABS(n) > 9)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;

	len = (ft_digit_count(n));
	if (!(number = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
	number[len] = '\0';
	len--;
	if (n < 0)
	{
		number[0] = '-';
		n = (long)-n;
	}
	if (n == 0)
		number[0] = '0';
	while ((len >= 0 && n > 0) || (len > 0 && n < 0))
	{
		number[len] = ((n % 10) + 48);
		n = (n / 10);
		len--;
	}
	return (number);
}
