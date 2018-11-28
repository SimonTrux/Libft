/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_cont_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:33:22 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 23:46:16 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_lst_add_cont_size(t_list *lst)
{
	size_t	all_content_size;

	all_content_size = 0;
	while (lst)
	{
		printf("Previous content size : %zu\n", all_content_size);
		printf("list content size : %zu\n", (*lst).content_size);
		all_content_size = all_content_size + (*lst).content_size;
		printf("New total content size : %zu\n\n", all_content_size);
		lst = (*lst).next;
	}
	return (all_content_size);
}
