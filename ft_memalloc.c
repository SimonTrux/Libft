/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:17:05 by struxill          #+#    #+#             */
/*   Updated: 2018/11/12 21:24:06 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*retptr;

	if (!(retptr = (void*)malloc(sizeof(size_t) * size + 1)))
		return (NULL);
	ft_bzero(retptr, size);
	return (retptr);
}
