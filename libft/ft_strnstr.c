/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:08:41 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 15:02:38 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		k;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		k = 0;
		while (haystack[i + k] == needle[k] && needle[k] != 0 && k + i < len)
			k++;
		if (k == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
