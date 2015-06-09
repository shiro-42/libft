/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 19:30:29 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:30:44 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int				ft_atoi(const char *str)
{
	int			atoint;
	int			i;
	int			is_neg;

	atoint = 0;
	i = 0;
	while (ft_isspace(*(str + i)))
		i++;
	is_neg = (*(str + i) == '-') ? -1 : 1;
	i += (*(str + i) == '+' || *(str + i) == '-') ? 1 : 0;
	while (ft_isdigit(*(str + i)))
	{
		atoint *= 10;
		atoint += (*(str + i++) - '0') * is_neg;
	}
	return (atoint);
}
