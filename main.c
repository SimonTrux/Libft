/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:21:56 by struxill          #+#    #+#             */
/*   Updated: 2018/11/09 15:32:30 by struxill         ###   ########.fr       */
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
/*	if (ac > 1)
	{
		ft_putstr("1er arg en ft_toupper : ");
		ft_putstr2(ft_toupper(av[1]));
		ft_putchar('\n');
		ft_putstr("1er arg en ft_tolower : ");
		ft_putstr2(ft_tolower(av[1]));
		ft_putchar('\n');
	}*/
	ft_putstr("test putnbr : ");
	ft_putnbr(-1555);
	ft_putchar('\n');
	if (ac > 1)
	{	
		ft_putstr("Atoi test from arg 1 : ");
		ft_putnbr(ft_atoi(av[1]));
	}
	return (0);
}
