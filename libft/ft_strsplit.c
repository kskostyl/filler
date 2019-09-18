/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 22:57:42 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/19 22:11:53 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_kcount(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			n++;
		s++;
	}
	return (n);
}

static size_t	ft_klength(char const *str, char c)
{
	size_t q;

	q = 0;
	if (!str)
		return (0);
	while (str[q] != c && str[q])
		q++;
	return (q);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	w;
	char	**b;

	i = 0;
	if (!s || !c)
		return ((void *)0);
	w = ft_kcount(s, c);
	if (!(b = (char **)malloc(sizeof(char *) * (w + 1))))
		return (NULL);
	while (i < w)
	{
		while (*s == c && *s)
			s++;
		b[i] = (char *)malloc(sizeof(char) * (ft_klength(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			b[i][j++] = *s++;
		b[i][j] = '\0';
		i++;
	}
	b[i] = 0;
	return (b);
}
