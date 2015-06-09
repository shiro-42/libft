/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:36:29 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:33:23 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstat(t_list *lst, size_t index)
{
	if (lst == NULL || index == 0)
		return (NULL);
	while (lst && --index)
		lst = lst->next;
	return (lst);
}
