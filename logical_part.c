/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logical_part.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:25:12 by kskostyl          #+#    #+#             */
/*   Updated: 2019/08/27 17:16:57 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	main_part(t_param *param)
{
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	while (y < param->height)
	{
		while (x < param->width)
		{
			i = verification_piece(param, x, y);
			if (i == 1)
				discover_decision(param, x, y);
			x++;
		}
		x = 0;
		y++;
	}
	ft_putnbr(param->end_y);
	ft_putchar(' ');
	ft_putnbr(param->end_x);
	ft_putchar('\n');
	free_map(param);
	free_piece(param);
}

void	help_for_dec(t_param *param, int x, int y)
{
	if (param->map[param->a][param->b] == param->opponent)
	{
		if (param->a < y)
			param->ri = y - param->a;
		else
			param->ri = param->a - y;
		if (param->b < x)
			param->le = x - param->b;
		else
			param->le = param->b - x;
		param->all = param->ri + param->le;
		if (param->minimum == -1 || param->minimum > param->all)
		{
			param->minimum = param->all;
			param->end_x = x;
			param->end_y = y;
		}
	}
}

void	discover_decision(t_param *param, int x, int y)
{
	param->a = 0;
	param->b = 0;
	while (param->a++ < param->height)
	{
		while (param->b++ < param->width)
		{
			help_for_dec(param, x, y);
		}
		param->b = 0;
	}
}
