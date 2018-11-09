/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:32:43 by struxill          #+#    #+#             */
/*   Updated: 2018/11/09 17:55:02 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
