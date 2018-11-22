/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:27:05 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 20:18:07 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(ptr, size);
	ptr[size] = '\0';
	return (ptr);
}
