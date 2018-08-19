# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skorac <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 11:13:00 by skorac            #+#    #+#              #
#    Updated: 2018/08/16 15:12:20 by skorac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = clang

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror -O2

LIBFT = libft

DIR_S = handles

DIR_O = temporary

HEADER = include

SOURCES = ft_extract_format.c \
		  ft_flag_spec.c \
		  ft_getsigned.c \
		  ft_getunsigned.c \
		  ft_handlechar.c \
		  ft_handlehex.c \
		  ft_handleint.c \
		  ft_handlelong.c \
		  ft_handleoctal.c \
		  ft_handleptr.c \
		  ft_handlestr.c \
		  ft_handleunsignedint.c \
		  ft_handlewchr.c \
		  ft_handlewstr.c \
		  ft_initflags.c \
		  ft_printf.c \
		  ft_putwstr.c \
		  ft_utoabase.c \
		  ft_handleper.c \
		  ft_getsigned.c \
		  ft_itoabase.c \
		  ft_checklength.c \
		ft_putnstr.c 

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(DIR_O)/%.o: $(DIR_S)/%.c
	@mkdir -p temporary
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_O)
	@make clean -C $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all
