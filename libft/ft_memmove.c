/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 22:10:36 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:40 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst_alias;
	char	*src_alias;

	dst_alias = (char *)(dst + n - 1);
	src_alias = (char *)(src + n - 1);
	if (dst_alias >= src_alias)
	{
		while (n--)
			*dst_alias-- = *src_alias--;
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
