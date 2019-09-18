/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 22:30:48 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/17 00:08:15 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(src + i))
		{
			*(dst + i) = *(src + i);
		}
		else
		{
			while (i < len)
			{
				*(dst + i) = '\0';
				i++;
			}
		}
		i++;
	}
	return (dst);
}
