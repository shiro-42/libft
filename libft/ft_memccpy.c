/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:12 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_alias;
	unsigned char	*src_alias;

	dst_alias = (unsigned char *)dst;
	src_alias = (unsigned char *)src;
	while (n--)
	{
		if ((*dst_alias++ = *src_alias++) == (unsigned char)c)
			return (dst_alias);
	}
	return (NULL);
}
