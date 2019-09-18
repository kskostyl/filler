/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 22:09:02 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/01 22:34:53 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>

void	start_param(t_param *param)
{
	param->for_all = 0;
	param->width = 0;
	param->piece_for_width = 0;
	param->height = 0;
	param->piece_for_height = 0;
}

void	characterize_for_all(char *line, t_param *param)
{
	if (param->for_all == 0)
		line = ft_gamer(line, param);
	param->for_all = 1;
	line = size_for_map(line, param);
	line = cur_map(line, param);
	line = size_for_piece(line, param);
	line = piece(line, param);
	free(line);
}

void	declaim_all(void)
{
	char		*line;
	t_param		*param;

	line = NULL;
	param = malloc(sizeof(t_param));
	start_param(param);
	while (get_next_line(0, &line) > 0)
	{
		characterize_for_all(line, param);
		param->minimum = -1;
		param->end_x = 0;
		param->end_y = 0;
		main_part(param);
	}
}

int		main(void)
{
	declaim_all();
	return (0);
}
