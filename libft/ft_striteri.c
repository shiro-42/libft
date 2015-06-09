/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:32:08 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:20 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*tmp;

	tmp = s;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
	{
		f((unsigned int)(s - tmp), s);
		s++;
	}
}
