# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/25 16:32:06 by kskostyl          #+#    #+#              #
#    Updated: 2019/09/02 11:44:42 by kskostyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = kskostyl.filler
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = *.c
HEADERS = filler.h
LIBFT = libft/libft.a

OBJ=$(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		make -C libft
		$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L. $(LIBFT)

$(LIBFT):
		make libft
$(OBJ):
	$(CC) $(FLAGS) -c $(SRC)

clean :
		-rm -f $(OBJ)

fclean : clean
		make fclean -C libft
		-rm -f $(NAME)
re: fclean all
