/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 10:53:54 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/17 00:16:43 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		rez;
	int		sign;

	i = 0;
	rez = 0;
	sign = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' ||
			str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10;
		rez += str[i] - 48;
		i++;
	}
	if (sign)
		return (-rez);
	else
		return (rez);
}
