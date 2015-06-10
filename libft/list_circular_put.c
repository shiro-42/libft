/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_put.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:07:11 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void					list_circular_put(t_circle *self)
{
	t_node				*cursor;

	cursor = self->origin->right;
	self->origin->put(self->origin);
	while (cursor != self->origin)
	{
		ft_putchar_fd(' ', 1);
		cursor->put(cursor);
		cursor = cursor->right;
	}
}
