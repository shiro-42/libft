/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:38:03 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:33:51 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	size_t		lstsize;
	t_list		*new;
	t_list		*tmp;

	lstsize = ft_lstsize(lst);
	if ((new = ft_lstnew(NULL, 0)) == NULL)
		return (NULL);
	tmp = NULL;
	while (lstsize)
	{
		if ((tmp = ft_lstnew(NULL, 0)) == NULL)
			return (NULL);
		tmp = (*f)(ft_lstat(lst, lstsize));
		ft_lstadd(&new, tmp);
		lstsize--;
	}
	return (new);
}
