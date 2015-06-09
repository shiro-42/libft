/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 22:00:08 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:33:11 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		tmp;
	int		len;
	char	*str;

	tmp = n;
	len = (n >= 0) ? 0 : 1;
	while ((tmp /= 10))
		len++;
	if ((str = (char *)malloc((sizeof(char) * len) + 1)) == NULL)
		return (NULL);
	*str = (n < 0) ? '-' : 0;
	*(str + len + 1) = '\0';
	while (len >= 0 && *(str + len) != '-')
	{
		*(str + len--) = (n < 0) ? (n % 10) * -1 + '0' : n % 10 + '0';
		n /= 10;
	}
	return (str);
}
