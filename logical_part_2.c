/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical_part_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 17:22:27 by kskostyl          #+#    #+#             */
/*   Updated: 2019/08/27 17:30:59 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		help_for_piece(t_param *param, int x, int y)
{
	if (param->piece[param->a][param->b] == '*'
		&& (param->map[y + param->a][x + param->b] == param->gamer ||
			param->map[y + param->a][x + param->b] ==
			ft_tolower(param->gamer)))
		return (1);
	else if (param->piece[param->a][param->b] == '*' &&
	param->map[y + param->a][x + param->b] != '.')
		return (-1);
	return (0);
}

int		verification_piece(t_param *param, int x, int y)
{
	int c;

	param->a = 0;
	param->b = 0;
	c = 0;
	while (param->a < param->piece_for_height && y + param->a < param->height)
	{
		while (param->b < param->piece_for_width && x + param->b < param->width)
		{
			if (help_for_piece(param, x, y) == 1)
				c++;
			else if (help_for_piece(param, x, y) == -1)
				return (0);
			param->b++;
		}
		if (!verification_row(param, param->a, param->b))
			return (0);
		param->b = 0;
		param->a++;
	}
	if (!verification_column(param, param->a))
		return (0);
	return (c);
}

int		verification_column(t_param *param, int y)
{
	int		x;

	x = 0;
	while (y < param->piece_for_height)
	{
		while (x < param->piece_for_width)
		{
			if (param->piece[y][x] == '*')
				return (0);
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}

int		verification_row(t_param *param, int y, int x)
{
	while (x < param->piece_for_width)
	{
		if (param->piece[y][x] == '*')
			return (0);
		x++;
	}
	return (1);
}
