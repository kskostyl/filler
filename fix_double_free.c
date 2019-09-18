/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_double_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 22:01:35 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/01 22:17:22 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	read_while_success(char **line)
{
	int	gnl_ret;

	gnl_ret = 0;
	while (!gnl_ret)
		gnl_ret = get_next_line(0, line);
}

char	*do_while_found_line(const char expected_line[], char *buf_line)
{
	int			found_line;
	size_t		expected_line_len;

	found_line = 0;
	expected_line_len = ft_strlen(expected_line);
	while (!found_line)
	{
		if (ft_strncmp(buf_line, expected_line, expected_line_len) == 0)
			found_line = 1;
		else
		{
			free(buf_line);
			read_while_success(&buf_line);
		}
	}
	return (buf_line);
}
