/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:26 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int							ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s1_alias;
	const unsigned char		*s2_alias;

	s1_alias = (const unsigned char *)s1;
	s2_alias = (const unsigned char *)s2;
	while (n--)
	{
		if (*s1_alias++ != *s2_alias++)
			return ((int)(*--s1_alias - *--s2_alias));
	}
	return (0);
}
