/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:45 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_alias;

	b_alias = (unsigned char *)b;
	while (len--)
		*b_alias++ = (unsigned char)c;
	return (b);
}
