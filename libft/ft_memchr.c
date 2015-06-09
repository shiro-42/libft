/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:20 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void						*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s_alias;

	s_alias = (unsigned char *)s;
	while (n--)
	{
		if (*s_alias++ == (unsigned char)c)
			return ((void *)(--s_alias));
	}
	return (NULL);
}
