/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 23:05:01 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/16 23:26:42 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*k;

	i = 0;
	k = (char *)s;
	while (i < n)
	{
		if ((unsigned char)k[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
