/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:38:49 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:34:01 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_lstsize(t_list *lst)
{
	size_t		lstsize;

	if (lst == NULL)
		return (0);
	lstsize = 1;
	while (lst->next != NULL)
	{
		lstsize++;
		lst = lst->next;
	}
	return (lstsize);
}
