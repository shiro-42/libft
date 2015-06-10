/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:49:40 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *str, const char *find, size_t slen)
{
	size_t	i;

	i = 0;
	if (*find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < slen)
	{
		if (ft_strncmp(str + i, find, ft_strlen(find)) == 0
				&& ft_strlen(find) + i <= slen)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
