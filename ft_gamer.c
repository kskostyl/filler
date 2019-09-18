/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gamer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:47:05 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/01 22:23:07 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*ft_gamer(char *line, t_param *param)
{
	line = do_while_found_line("$$$ exec ", line);
	if (line[10] == '1')
		param->gamer = 79;
	else
		param->gamer = 88;
	if (line[10] == '1')
		param->opponent = 88;
	else
		param->opponent = 79;
	return (line);
}
