/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 12:23:54 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/18 22:40:40 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*a;

	if (!(a = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	a[size] = '\0';
	while (size--)
		a[size] = '\0';
	return (a);
}
