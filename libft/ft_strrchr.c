/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:09:43 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:31 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	size_t			len;
	const char		*s_alias;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	s_alias = (char *)(s + len);
	while (*s_alias != (char)c)
	{
		if (len == 0)
			return (NULL);
		s_alias--;
		len--;
	}
	return ((char *)s_alias);
}
