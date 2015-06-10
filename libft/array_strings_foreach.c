/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_strings_foreach.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 17:13:22 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/10 17:13:43 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		array_strings_foreach(char **args, char *(*f)(char *))
{
	if (args == NULL)
		throw_error("array_string_foreach: args was empty");
	while (*args != NULL)
		*args = (*f)(*args), args++;
}
