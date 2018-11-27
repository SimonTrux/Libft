/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:45:17 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 23:46:25 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_lstcat(t_list *lst)
{
	size_t	len_content;
	size_t	i;
	size_t	j;
	char	*retstr;
	char	*tmp;

	len_content = ft_lst_add_cont_size(lst);
	i = 0;
	if (!(retstr = (char*)malloc(sizeof(char) * len_content + 1)))
		return (NULL);
	while (lst)
	{
		j = 0;
		tmp = lst->content;
		while ((*lst).content_size--)
		{
			retstr[i] = tmp[j];
			i++;
			j++;
		}
		lst = lst->next;
	}
	retstr[i] = '\0';
	return (retstr);
}
