/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_shift.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:01:32 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:01:52 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_node					*list_circular_shift(t_circle *self)
{
	t_node				*target;

	if (self->origin->left != self->origin)
	{
		target = self->origin;
		self->origin->left->right = self->origin->right;
		self->origin->right->left = self->origin->left;
		self->origin = self->origin->right;
	}
	else
	{
		target = self->origin;
		self->origin = NULL;
	}
	self->length -= 1;
	return (target);
}
