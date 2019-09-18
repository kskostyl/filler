/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:25:54 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/01 14:05:01 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	a = ft_memalloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		a[i++] = s[start++];
	}
	a[i] = '\0';
	return (a);
}
