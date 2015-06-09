/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:26:32 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:08 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char			*ft_strndup(const char *s, size_t n)
{
	char		*copy;

	if ((copy = ft_strnew(sizeof(char) * n + 1)) == NULL)
		return (NULL);
	ft_strncpy(copy, s, n);
	return (copy);
}
