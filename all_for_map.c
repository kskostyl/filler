/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_for_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:53:13 by kskostyl          #+#    #+#             */
/*   Updated: 2019/08/27 15:57:55 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char		*size_for_map(char *line, t_param *param)
{
	char	**param_line;

	while (ft_strncmp(line, "Plateau", 7) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	param_line = ft_strsplit(line, ' ');
	param->height = ft_atoi(param_line[1]);
	param->width = ft_atoi(param_line[2]);
	ft_free_line(param_line);
	return (line);
}

void		new_map(t_param *param)
{
	int		i;

	i = 0;
	param->map = (char **)malloc(sizeof(char*) * (param->height + 1));
	while (i < param->height + 1)
	{
		param->map[i] = (char*)malloc(sizeof(char) * (param->width + 1));
		i++;
	}
}

char		*start_after_zero(char *line, t_param *param)
{
	while (ft_strncmp(line, "000", 3) != 0)
	{
		free(line);
		get_next_line(0, &line);
	}
	new_map(param);
	return (line);
}

char		*cur_map(char *line, t_param *param)
{
	int		a;
	int		b;
	int		start_to_read_point;

	a = 0;
	b = 0;
	start_to_read_point = 4;
	line = start_after_zero(line, param);
	while (a < param->height)
	{
		while (b < param->width)
		{
			param->map[a][b] = line[start_to_read_point++];
			b++;
		}
		a++;
		b = 0;
		free(line);
		get_next_line(0, &line);
		start_to_read_point = 4;
	}
	return (line);
}
