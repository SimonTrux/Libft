/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:33:54 by struxill          #+#    #+#             */
/*   Updated: 2018/11/25 16:00:20 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	else if (ft_is_valid_nb(res * sign) == 0)
		return ((sign < 0) ? 0 : -1);
	return ((sign < 0) ? 0 : -1);
}
