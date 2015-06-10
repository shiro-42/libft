/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_int_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 16:58:47 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 16:59:26 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int						*new_int_ptr(int data)
{
	int					*new;

	if ((new = (int *)malloc(sizeof(int))) == NULL)
		throw_error("allocation error");
	*new = data;
	return (new);
}
