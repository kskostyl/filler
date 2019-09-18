/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k_fahr_cel.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:09:01 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 13:11:07 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_k_fahr_cel(float fahrenheit)
{
	float	celsius;

	celsius = (fahrenheit - 32) * 5 / 9;
	return (celsius);
}
