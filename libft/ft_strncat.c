/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:22:17 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:52 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char				*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t			dst_len;

	dst_len = ft_strlen(dst);
	if (ft_strlen(src) < n)
		ft_strcpy((dst + dst_len), src);
	else
	{
		ft_strncpy((dst + dst_len), src, n);
		dst[dst_len + n] = '\0';
	}
	return (dst);
}
