# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorac <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 09:00:33 by skorac            #+#    #+#              #
#    Updated: 2018/07/10 11:43:35 by skorac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COM  = gcc
FLAGS = -Wall -Wextra -Werror
SRC = *.c
OBJ = $(SRC:.c=.o)
HEAD = ft_printf.h 

$(NAME): $(HEAD)
	$(COM) -c $(FLAGS) $(SRC) -I $(HEAD)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
