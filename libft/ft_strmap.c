/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:32:20 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:43 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char		*ret;
	size_t		count;

	count = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if ((ret = (char *)ft_memalloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (*(s + count))
	{
		*(ret + count) = f(*(s + count));
		count++;
	}
	*(ret + count) = '\0';
	return (ret);
}
