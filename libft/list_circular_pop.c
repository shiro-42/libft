/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_pop.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:06:25 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_node					*list_circular_pop(t_circle *self)
{
	t_node				*target;

	if (self->origin->left != self->origin)
	{
		target = self->origin->left;
		self->origin->left->left->right = self->origin;
		self->origin->left = self->origin->left->left;
	}
	else
	{
		target = self->origin;
		self->origin = NULL;
	}
	self->length -= 1;
	return (target);
}
