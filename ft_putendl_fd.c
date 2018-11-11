/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:00:01 by struxill          #+#    #+#             */
/*   Updated: 2018/11/11 18:01:28 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int len;

	len = ft_strlen(s);
	if (s)
	{
		write(fd, s, len);
		ft_putchar('\n');
	}
}
