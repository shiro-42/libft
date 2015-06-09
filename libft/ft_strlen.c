/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 01:20:39 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:36:38 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t				ft_strlen(const char *str)
{
	const char		*count;

	if ((count = str) == NULL)
		return (0);
	while (*count)
		count++;
	return ((size_t)(count - str));
}
