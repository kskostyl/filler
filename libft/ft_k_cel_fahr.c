/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k_cel_fahr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 00:23:07 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/22 00:25:03 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_k_cel_fahr(float celsius)
{
	float	fahrenheit;

	fahrenheit = (celsius * 9 / 5) + 32;
	return (fahrenheit);
}
