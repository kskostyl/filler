# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kskostyl <kskostyl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/22 12:50:20 by kskostyl          #+#    #+#              #
#    Updated: 2019/09/01 14:25:23 by kskostyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror
# FLAGS = -g -fsanitize=address

SRC = ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_memdel.c \
	  ft_memalloc.c \
	  ft_strclr.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_itoa.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_klen.c \
	  ft_kspace.c \
	  ft_kmax.c \
	  ft_kmin.c \
	  ft_k_cel_fahr.c \
	  ft_k_fahr_cel.c \
	  get_next_line.c \
	  ft_update.c
OBJECTS =  $(SRC:.c=.o)

INCLUDE = libft.h

all : $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
