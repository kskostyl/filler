/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:24:50 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/17 22:20:00 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*k;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	k = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!k)
		return (NULL);
	while (s1[i] != '\0')
	{
		k[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		k[i + j] = s2[j];
		j++;
	}
	k[i + j] = '\0';
	return (k);
}
