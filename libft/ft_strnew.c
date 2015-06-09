/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:32:49 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:21 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "./libft.h"

char		*ft_strnew(size_t size)
{
	void	*new_str;

	if ((signed)size < 0)
		return (NULL);
	new_str = (char *)ft_memalloc((sizeof(char) * size) + 1);
	if (new_str == NULL)
		return (NULL);
	ft_bzero(new_str, size + 1);
	return (new_str);
}
