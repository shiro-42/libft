/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_circular_initial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:05:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:06:00 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_circle				*list_circular_initial(t_circle *self, count)
{
	t_circle			*new;

	if (count > self->length)
		throw_error("");
	new = new_list_circular(self->origin->data, self->origin->type);
}
