/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeydon <nbeydon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 00:13:38 by nbeydon           #+#    #+#             */
/*   Updated: 2015/06/09 19:37:36 by nbeydon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "./libft.h"

static size_t		words_nbr(char const *s, char c)
{
	size_t			words;
	size_t			len;

	words = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len)
			words++;
	}
	return (words);
}

static size_t		words_len(char const *s, char c)
{
	size_t			len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t			words;
	size_t			len;
	char			**ret;

	if (s == NULL || *s == -1 || c == 0)
		return (NULL);
	words = words_nbr(s, c);
	if ((ret = (char **)malloc((sizeof(char *) * words) + 1)) == NULL)
		return (NULL);
	while (*s)
	{
		len = 0;
		if (*s != c)
		{
			len = words_len(s, c);
			*ret = ft_strnew(len);
			ft_strncpy(*ret, s, len);
			ret++;
			s += len;
		}
		else
			s++;
	}
	*ret = NULL;
	return (ret - words);
}
