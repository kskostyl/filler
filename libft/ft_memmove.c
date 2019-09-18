/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 22:37:26 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/16 22:46:46 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*a;
	const char	*b;

	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if (a < b)
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			a[len] = b[len];
		}
	}
	return (dst);
}
