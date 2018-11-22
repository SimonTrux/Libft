/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:57:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 19:41:53 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
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
	long	nb;

	nb = n;
	len = (ft_digit_count(nb));
	if (!(number = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
	number[len] = '\0';
	len--;
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		number[0] = '0';
	while ((len >= 0 && nb > 0) || (len > 0 && nb < 0))
	{
		number[len] = ((nb % 10) + 48);
		nb = (nb / 10);
		len--;
	}
	return (number);
}
