/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 23:01:29 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 19:42:51 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	if (haystack[a] == '\0' && needle[a] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] != '\0' && haystack[a + b] == needle[b])
			b++;
		if (needle[b] == '\0')
			return ((char *)haystack + a);
		a++;
	}
	return (NULL);
}
