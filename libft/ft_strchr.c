/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:35:45 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char				*ft_strchr(const char *s, int c)
{
	const char		*s_alias;

	s_alias = (char *)s;
	while (*s_alias != (char)c)
	{
		if (*s_alias == '\0')
			return (NULL);
		s_alias++;
	}
	return ((char *)s_alias);
}
