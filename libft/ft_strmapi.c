/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 19:51:44 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 18:22:03 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*k;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	k = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (k == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		k[i] = f(i, s[i]);
		i++;
	}
	k[i] = '\0';
	return (k);
}
