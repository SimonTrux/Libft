/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:57:03 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 17:48:20 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
	int		i;

	len = (ft_digit_count(n));
	if (!(number = (char*)malloc(len * sizeof(char) + 1)))
		return (NULL);
	i = len;
	number[i] = '\0';
	i--;
	if (n < 0)
	{
		number[0] = '-';
		n = -n;
	}
	if (n == 0)
		number[0] = '0';
	while ((i >= 0 && n > 0) || (i > 0 && n < 0))
	{
		number[i] = ((n % 10) + 48);
		printf("number[%d] = %c\n", i, number[i]);
		n = (n / 10);
		i--;
	}
	return (number);
}

int		main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = 42;
	b = -42;
	c = 0;
	d = -0;
	e = -987654321;
	f = -1;

	printf("itoa de %d : %s\n", a, ft_itoa(a));
	printf("itoa de %d : %s\n", b, ft_itoa(b));
	printf("itoa de %d : %s\n", c, ft_itoa(c));
	printf("itoa de %d : %s\n", d, ft_itoa(d));
	printf("itoa de %d : %s\n", e, ft_itoa(e));
	printf("itoa de %d : %s\n", f, ft_itoa(f));
	return (0);
}
