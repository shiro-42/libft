/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foreach_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:11:44 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:14:18 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		foreach_char(char *string, char (*f)(char))
{
	if (string == NULL)
		throw_error("string_foreach: string was empty");
	while (*string)
		*string = (*f)(*string), string++;
}
