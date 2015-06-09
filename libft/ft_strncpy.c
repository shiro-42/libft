/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:25:49 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:03 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	char		*dst_alias;

	dst_alias = dst;
	while ((*src != '\0') && n > 0)
	{
		*dst_alias++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*dst_alias++ = '\0';
		n--;
	}
	return (dst);
}
