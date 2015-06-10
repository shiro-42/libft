/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_push_back.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:06:39 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void					list_circular_push_back(t_circle *self, t_node *node)
{
	if (node != NULL)
	{
		node->left = self->origin->left;
		node->right = self->origin;
		self->origin->left->right = node;
		self->origin->left = node;
		self->length += 1;
	}
}
