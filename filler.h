/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 22:51:17 by kskostyl          #+#    #+#             */
/*   Updated: 2019/09/02 11:35:21 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"
# include "stdio.h"
# include "stdlib.h"
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_param
{
	int				for_all;
	int				width;
	int				piece_for_width;
	int				height;
	int				piece_for_height;
	int				minimum;
	int				end_x;
	int				end_y;
	char			**piece;
	char			gamer;
	char			opponent;
	char			**map;
	int				ri;
	int				le;
	int				all;
	int				a;
	int				b;

}					t_param;

void				free_map(t_param *param);
void				free_piece(t_param *param);
void				read_while_success(char **line);
char				*do_while_found_line(const char expected_line[],
		char *buf_line);
void				start_param(t_param *param);
void				characterize_for_all(char *line, t_param *param);
void				declaim_all(void);
char				*size_for_map(char *line, t_param *param);
void				new_map(t_param *param);
char				*start_after_zero(char *line, t_param *param);
char				*cur_map(char *line, t_param *param);
char				*size_for_piece(char *line, t_param *param);
void				ft_free_line(char **param_line);
void				new_piece(t_param *param);
char				*piece(char *line, t_param *param);
char				*ft_gamer(char *line, t_param *param);
void				main_part(t_param *param);
void				discover_decision(t_param *param, int x, int y);
int					verification_piece(t_param *param, int x, int y);
int					verification_column(t_param *param, int y);
int					verification_row(t_param *param, int x, int y);

#endif
