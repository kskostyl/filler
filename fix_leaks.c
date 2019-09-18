/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_leaks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 22:00:09 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/01 22:33:34 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	free_map(t_param *param)
{
	int i;

	i = 0;
	while (i < param->height + 1)
	{
		free(param->map[i]);
		i++;
	}
	free(param->map);
}

void	free_piece(t_param *param)
{
	int i;

	i = 0;
	while (i < param->piece_for_height + 1)
	{
		free(param->piece[i]);
		i++;
	}
	free(param->piece);
}
