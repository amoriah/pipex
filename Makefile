# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 23:15:47 by amoriah           #+#    #+#              #
#    Updated: 2022/01/24 23:47:56 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	pipex

SRC		=	pipex.c utils.c

LIB		=	./libft/libft.a

HEADER	=	pipex.h ././libft/libft.h

RM		=	rm -f

OBJ		=	$(SRC:.c=.o)

GCC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

GREEN	=	"\033[1;32m"
EOC		=	"\033[0m"

$(NAME):	$(OBJ) $(HEADER)
			@$(MAKE) -C ./libft
			@$(GCC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)
			@echo $(GREEN) The compilation was successful $(EOC)

%.o :		%.c $(HEADER)
			@$(GCC) $(CFLAGC) -c $< -o $@

all	:		$(NAME)

clean:		
			@$(RM) $(OBJ)
			@$(MAKE) clean -C ./libft

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re