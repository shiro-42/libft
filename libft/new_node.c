/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:00:11 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:00:48 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_node					*new_node(void *data, int type)
{
	t_node				*new;

	if ((new = (t_node *)malloc(sizeof(t_node))) == NULL)
		throw_error("malloc Error");
	new->data = data;
	new->type = type;
	new->left = new;
	new->right = new;
	new->put = &node_put;
	return (new);
}
