/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:19:41 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 19:14:22 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;

	while (lst)
	{
		new_list = ft_lstnew((*f)(lst)->content, (*f)(lst)->content_size);
		new_list->next = (*f)(lst)->next;
		lst = lst->next;
	}
	return (new_list);
}
