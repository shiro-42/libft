/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 16:45:12 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 16:47:59 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		throw_error(char *error)
{
	if (DEBUG == 0)
	{
		ft_putstr_fd("\x1B[31mError:\033[0m ", 2);
		ft_putstr_fd(error, 2);
	}
	else
		ft_putstr_fd("\x1B[31mError\033[0m", 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}
