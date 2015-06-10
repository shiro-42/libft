/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list_circular.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 16:58:15 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 16:59:20 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_circle				*new_list_circular(void *data, int type)
{
	t_circle			*new;

	if ((new = (t_circle *)malloc(sizeof(t_circle))) == NULL)
		throw_error("malloc Error");
	new->origin = new_node(data, type);
	new->push_front = &list_circular_push_front;
	new->push_back = &list_circular_push_back;
	new->insert = &list_circular_insert;
	new->rotate_right = &list_circular_rotate_right;
	new->rotate_left = &list_circular_rotate_left;
	new->pop = &list_circular_pop;
	new->shift = &list_circular_shift;
	new->put = &list_circular_put;
	new->put_reverse = &list_circular_put_reverse;
	new->keys = &list_circular_get_keys;
	new->delete = &list_circular_delete;
	new->some = &list_circular_some;
	new->length = 1;
	return (new);
}
