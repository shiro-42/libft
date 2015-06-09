/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:32:23 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:48 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*ret;
	size_t		count;

	if ((ret = (char *)ft_memalloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	count = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (*(s + count))
	{
		*(ret + count) = f(count, *(s + count));
		count++;
	}
	return (ret);
}
