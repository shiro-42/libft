/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_insert.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:06:13 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void					list_circular_insert(t_circle *self, int d, t_node *n)
{
	t_node				*target;

	if (d > self->length)
		throw_error("list_circular::insert bad destination");
	if (n != NULL)
	{
		if (d == self->length)
			return (self->push_back(self, n));
		target = self->origin;
		while (d > 0)
			target = target->right, --d;
		if (target == self->origin)
			self->origin = n;
		n->left = target->left;
		n->right = target;
		target->left->right = n;
		target->left = n;
		self->length += 1;
	}
	else
		throw_error("list_circular::insert call with NULL n");
}
