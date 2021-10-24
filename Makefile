# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/10/13 19:11:58 by mmicheli          #+#    #+#             #
#   Updated: 202#   Updated: 2021/10/24 20:01:21 by mmicheli         ###   ########.fr       #                                              #
# ************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c			ft_isalnum.c		ft_isascii.c	ft_isprint.c \
			ft_memcmp.c			ft_memmove.c		ft_strchr.c		ft_strlcat.c \
			ft_strlen.c			ft_strnstr.c		ft_tolower.c	ft_bzero.c \
			ft_isalpha.c		ft_isdigit.c		ft_memchr.c		ft_memcpy.c \
			ft_memset.c			ft_strdup.c			ft_strlcpy.c	ft_strncmp.c \
			ft_strrchr.c		ft_toupper.c		ft_calloc.c \
			ft_substr.c			ft_strjoin.c		ft_strtrim.c	ft_split.c \
			ft_itoa.c			ft_strmapi.c		ft_striteri.c	ft_putchar_fd.c \
			ft_putstr_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c
SRC_B	=	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c \
			ft_lstadd_back.c	ft_lstdelone.c		ft_lstclear.c	ft_lstiter.c \
			ft_lstmap.c

HEAD	=	libft.h
OBJ		=	$(SRC:%.c=%.o)
OBJ_B	=	$(SRC_B:%.c=%.o)

D_FIL	=	$(SRC:%.c=%.d)
D_FIL_B	=	$(SRC_B:%.c=%.d)

FLAG	=	-Wall -Werror -Wextra
CC		=	gcc

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	ar rcs $(NAME) $?

%.o		:	%.c
	$(CC) $(FLAG) -c $< -o $@ -MD

include $(wildcard $(D_FIL) $(D_FIL_B))

bonus	:
	@make OBJ="$(OBJ) $(OBJ_B)" all

clean	:
	rm -f $(OBJ) $(OBJ_B) $(D_FIL) $(D_FIL_B)

fclean	: clean
	rm -rf $(NAME)

re		:	fclean all