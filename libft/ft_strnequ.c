/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:32:34 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:15 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int				ft_strnequ(char const *s1, char const *s2, size_t size)
{
	size_t		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && i < size)
		i++;
	if (i == size)
		return (1);
	return (0);
}
