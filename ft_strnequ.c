/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:32:26 by struxill          #+#    #+#             */
/*   Updated: 2018/11/23 19:55:30 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if ((s1[0] == '\0' || s2[0] == '\0') && s1[0] != s2[0])
		return (0);
	if (s1 && s2)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i] && n)
		{
			i++;
			n--;
		}
		if ((s1[i] == s2[i]) && n == 0)
			return (1);
		else if (n != 0 && s1[i] == s2[i] && (s1[i] == '\0' || s2[i] == '\0'))
			return (1);
		else
			return (0);
	}
	return (0);
}
