/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:32:48 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:35:53 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(const char *s1, const char *s2)
{
	int		ret;

	ret = 0;
	while (((unsigned char)*s1 == (unsigned char)*s2))
	{
		if ((unsigned char)*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	ret = (int)(*(unsigned char *)s1 - *(unsigned char *)s2);
	return (ret);
}
