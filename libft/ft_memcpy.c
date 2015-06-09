/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:30 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*src_alias;
	char			*dst_alias;

	src_alias = (char *)src;
	dst_alias = (char *)dst;
	while (n--)
		*dst_alias++ = *src_alias++;
	return (dst);
}
