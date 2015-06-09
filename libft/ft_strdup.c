/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:06 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"

char			*ft_strdup(const char *s)
{
	char		*copy;
	size_t		size;

	size = ft_strlen(s);
	if ((s) && (copy = ft_strnew(sizeof(char) * (size + 1))))
	{
		ft_memcpy(copy, s, (size + 1));
		return (copy);
	}
	return (NULL);
}
