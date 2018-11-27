/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:46:27 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 23:46:27 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;
	char	*lstcat;
	size_t	maxlen;

	list1 = ft_lstnew("Hello\n", 5);
	list2 = ft_lstnew("My name is Bob", 14);
	list3 = ft_lstnew("I m practicing the lists...", 27);
	list4 = ft_lstnew("Dernier maillon de la chaine\n", 29);
//	ft_lstadd(&list1, list2);
//	ft_lstadd(&list2, list3);
//	ft_lstadd(&list3, list4);

	list1->next = list2;
	list2->next = list3;
	list3->next = list4;

	ft_lst_aff(list1);	
	ft_putstr("\n\n--- --- --- --- --- --- ---\n\n\n");

	lstcat = ft_lstcat(list1);
	maxlen = ft_lst_add_cont_size(list1);
	ft_putstr("Maxlen is : ");
	ft_putnbr(maxlen);
	ft_putstr("\nConcat str is : ");
	ft_putstr(lstcat);
	ft_putstr("\n\n");
	return (0);
}
