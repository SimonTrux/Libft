/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 19:14:14 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 16:20:42 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_list;

	new_list = NULL;
	if (content == NULL)
	{
		new_list->content = NULL;
		content_size = 0;
		new_list->next = NULL;
	}
	else
	{
		if (!(new_list->content = malloc(sizeof(void*) * content_size + 1)))
			return (NULL);
		strcpy(new_list->content, content);
		new_list->next = NULL;
	}
	return (new_list);
}
