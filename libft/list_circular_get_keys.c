/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_get_keys.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:05:40 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_iterator			*list_circular_get_keys(t_circle *self)
{
	t_iterator		*new;

	if (self != NULL)
	{
		if (!(new = (t_iterator*)malloc(sizeof(t_iterator))))
			throw_error("malloc error");
		new->index = 0;
		new->max = self->length;
		new->done = 0 == self->length;
		new->next = &iterator_next;
		return (new);
	}
	return (NULL);
}
