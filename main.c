/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:21:56 by struxill          #+#    #+#             */
/*   Updated: 2018/11/10 19:37:27 by struxill         ###   ########.fr       */
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
#define TEST(x)  ft_putendl(YEL "\nTEST DE "x"\n" RESET)


int	ft_int_test_int(void (*f1)(int), int *tab)
{
	int i;

	i = 0;
	while (i > 10)
	{
		(*f1)(tab[i]);
		ft_putchar('\n');
//		(*f2)(tab[i]);
		i++;
	}
	return (0);


}

int	main(int ac, char **av)
{
	int tabint[10] = { -42, -1, 0, 1, 2, 2147483647, -2147483648, -9999, 987654321, 42 };

//	tabint[10] = 15;
	//	PUTSTR PUTNBR PUTCHAR
	//	(void)av;
	TEST("PUTSTR PUTCHAR");
	ft_putchar('\n');
	ft_putstr("There is ");
	ft_putnbr(ac - 1);
	ft_putstr(" argument");
	if ((ac - 1) > 1)
		ft_putchar('s');
	ft_putstr(".\n");
	TEST("PUTNBR WITH FT_TEST_INT");
	ft_int_test_int(ft_putnbr, tabint);
	ft_putnbr(-1555);
	ft_putchar('\n');
	TEST("PUTENDL");
	ft_putendl("Ceci est un test de ft_putndl");
	if (ac > 1)
	{	
		TEST("ATOI");
//		ft_int_test_int(ft_atoi, tabint);
		ft_putchar('\n');
		ft_putchar('\n');
		TEST("ITOA");
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
		TEST("STRCMP");
		ft_putchar('\n');
		printf("my strcmp de av1 et av2 : %d\n", ft_strcmp(av[1], av[2]));
		printf("ori strcmp de av1 et av2 : %d\n", strcmp(av[1], av[2]));
	}		
	return (0);
}
