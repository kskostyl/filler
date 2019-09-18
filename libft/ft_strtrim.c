/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 20:51:47 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 18:34:16 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		q;
	char	*w;

	if (!s)
		return (NULL);
	i = 0;
	q = 0;
	while (s[i] && ft_kspace(s[i]))
		i += 1;
	q = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_kspace(s[q + i]))
		q -= 1;
	if (!(w = ft_strnew(q + 1)))
		return (NULL);
	ft_strncpy(w, (s + i), (q + 1));
	return (w);
}
