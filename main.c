/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:21:56 by struxill          #+#    #+#             */
/*   Updated: 2018/11/09 18:41:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define CYN   "\x1B[36m"
#define RESET "\x1B[0m"

//int	ft_inttest

int	main(int ac, char **av)
{

	//	PUTSTR PUTNBR PUTCHAR
	//	(void)av;
	ft_putstr(YEL "TEST PUTSTR PUTNBR PUTCHAR\n" RESET);
	ft_putchar('\n');
	ft_putstr("There is ");
	ft_putnbr(ac - 1);
	ft_putstr(" argument");
	if ((ac - 1) > 1)
		ft_putchar('s');
	ft_putstr(".\n");
	ft_putstr("test putnbr : ");
	ft_putnbr(-1555);
	ft_putchar('\n');
	ft_putendl("Ceci est un test de ft_putndl");
	ft_putendl("Ceci est un test de ft_putndl");
	ft_putendl("Ceci est un test de ft_putndl");
	if (ac > 1)
	{	
		ft_putstr(YEL "ATOI TEST from arg 1 : " RESET);
		ft_putnbr(ft_atoi(av[1]));
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putendl(YEL "ITOA TEST" RESET);
		ft_putchar('\n');
		ft_putstr(ft_itoa(987));
		ft_putchar('\n');
		ft_putendl(ft_itoa(-987));
		ft_putendl(ft_itoa(0));
		ft_putendl(ft_itoa(-2123456789));

	}
	//	STRCMP
	if (ac > 2)
	{
		ft_putstr("TEST STRCMP");	
		ft_putchar('\n');
		printf("my strcmp de av1 et av2 : %d\n", ft_strcmp(av[1], av[2]));
		printf("ori strcmp de av1 et av2 : %d\n", strcmp(av[1], av[2]));
	}		
	return (0);
}
