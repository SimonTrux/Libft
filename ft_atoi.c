/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:33:54 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 18:00:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (ft_is_valid_nb(res * sign) == 1)
		return ((int)(res * sign));
	return ((sign < 0) ? 0 : -1);
}
/*
int main(void)
{
	int j;
	char	*str;

	j = 0;
	while (j < 10)
	{
		str[j] = ((char)(rand() % 10) + '0');
		j++;
	}
	str[11] = 0;
	printf("original atoi : %d\n", atoi(str));
	printf("my atoi : %d\n", ft_atoi(str));
	ft_putstr("erreur");
	return (0);
}*/
