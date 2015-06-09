/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 04:56:15 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:05 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		*ft_memalloc(size_t size)
{
	void	*buf;

	if ((buf = malloc(size)) == NULL)
		return (0);
	ft_bzero(buf, size);
	return (buf);
}
