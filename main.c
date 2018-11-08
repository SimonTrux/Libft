/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:21:56 by struxill          #+#    #+#             */
/*   Updated: 2018/11/08 15:51:09 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	(void)av;
	ft_putstr("There is ");
	ft_putnbr(ac - 1);
	ft_putstr(" argument");
	if ((ac - 1) > 1)
		ft_putchar('s');
	ft_putstr(".\n");
	return (0);
}
