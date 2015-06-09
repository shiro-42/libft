/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:01:17 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:52 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char			*ft_strtrim(char const *s)
{
	char		*end;
	char		*ret;

	if (s == NULL)
		return (NULL);
	end = (char *)s + ft_strlen(s) - 1;
	while (*s)
	{
		if (!(*s == ' ' || *s == '\t' || *s == '\n'))
			break ;
		s++;
	}
	if (s == end + 1)
		return (ft_strnew(1));
	while (*end)
	{
		if (!(*end == ' ' || *end == '\t' || *end == '\n'))
			break ;
		end--;
	}
	ret = ft_strndup(s, (end - s + 1));
	return (ret);
}
