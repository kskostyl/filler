/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:26:25 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/19 21:11:21 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*k;
	size_t	i;

	i = 0;
	k = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	k = s1;
	if (!s1 || !s2)
		return ((void *)0);
	while (*s1 != '\0')
		s1++;
	while ((*s2 != '\0') && (i < n))
	{
		*s1 = *s2;
		i++;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (k);
}
