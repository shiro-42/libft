/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_put_reverse.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:07:25 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void					list_circular_put_reverse(t_circle *self)
{
	t_node				*cursor;

	cursor = self->origin->left;
	while (cursor != self->origin)
	{
		cursor->put(cursor);
		ft_putchar_fd(' ', 1);
		cursor = cursor->left;
	}
	cursor->put(cursor);
}
