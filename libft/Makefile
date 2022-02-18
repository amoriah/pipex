# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 08:58:00 by amoriah           #+#    #+#              #
#    Updated: 2022/01/24 23:33:35 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_strlen.c	ft_memcpy.c ft_toupper.c ft_strnstr.c \
			ft_isalpha.c ft_memmove.c ft_strrchr.c ft_isascii.c	ft_strlcat.c \
			ft_strncmp.c ft_isdigit.c ft_strlcpy.c ft_calloc.c ft_isprint.c \
			ft_isalnum.c ft_memchr.c ft_memset.c ft_strchr.c ft_memcmp.c \
			ft_bzero.c ft_tolower.c ft_strdup.c ft_atoi.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_split.c

HEADER	=	libft.h

OBJ		=	$(patsubst %.c, %.o, $(SRCS))


CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER)

.PHONY	:	all clean fclean re

all			:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			@ar rcs $(NAME)	$?

%.o		:	%.c $(HEADER)
			@$(CC) $(FLAGS) -c $< -o $@


clean	:
		@rm -f $(OBJ)

fclean	:		clean
		@rm -f $(NAME)

re		:		fclean all
