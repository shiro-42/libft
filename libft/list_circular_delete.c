/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_delete.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:02:09 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:02:24 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void			list_circular_delete(t_circle *self, int index)
{
	t_node		*target;
	int			i;

	i = 1;
	if (index >= self->length)
		throw_error("list_delete: Index to delete unavailable.");
	if (index == 0)
		free(self->shift(self));
	else if ((index + 1 == self->length) || (index == LAST))
		free(self->pop(self));
	else
	{
		target = self->origin;
		while (i++ <= index)
			target = target->right;
		target->left->right = target->right;
		target->right->left = target->left;
		free(target);
		self->length -= 1;
	}
}
