/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:28:08 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 19:48:43 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*a;
	char	*b;

	a = malloc(size);
	if (!a)
		return (NULL);
	if (size > 0)
	{
		b = a;
		while (size)
		{
			*b++ = (unsigned char)0;
			size--;
		}
	}
	return (a);
}
