/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_put.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:08:21 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:08:31 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void					node_put(t_node *self)
{
	if (self->type == INT)
		ft_putnbr(*(int*)self->data);
	else if (self->type == CHAR)
		ft_putchar((char)self->data);
	else if (self->type == STRING)
		ft_putstr((char*)self->data);
}
