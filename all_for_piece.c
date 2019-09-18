/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_for_piece.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:11:06 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/02 11:53:07 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*size_for_piece(char *line, t_param *param)
{
	char	**param_line;

	while (ft_strncmp(line, "Piece", 5) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	param_line = ft_strsplit(line, ' ');
	param->piece_for_height = ft_atoi(param_line[1]);
	param->piece_for_width = ft_atoi(param_line[2]);
	ft_free_line(param_line);
	return (line);
}

void	ft_free_line(char **param_line)
{
	free(param_line[0]);
	free(param_line[1]);
	free(param_line[2]);
	free(param_line);
}

void	new_piece(t_param *param)
{
	int		i;

	i = 0;
	param->piece = (char **)malloc(sizeof(char*) *
			(param->piece_for_height + 1));
	while (i < param->piece_for_height + 1)
	{
		param->piece[i] = (char*)malloc(sizeof(char) *
				(param->piece_for_width + 1));
		i++;
	}
}

char	*piece(char *line, t_param *param)
{
	int		a;
	int		b;
	int		start_to_read_point;

	a = 0;
	b = 0;
	start_to_read_point = 0;
	new_piece(param);
	while (a < param->piece_for_height)
	{
		free(line);
		get_next_line(0, &line);
		while (b < param->piece_for_width)
		{
			param->piece[a][b] = line[start_to_read_point++];
			b++;
		}
		a++;
		b = 0;
		start_to_read_point = 0;
	}
	return (line);
}
