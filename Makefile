# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 17:27:36 by abourdon          #+#    #+#              #
#    Updated: 2022/11/22 17:41:38 by abourdon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a
CC =	cc
CFLAGS =	-Wall -Werror -Wextra
AR =	ar rcs
RM =	rm -rf
SRC =		ft_check_string.c \
	ft_printf.c \
	ft_putchar.c \
	ft_putnbr_hexa.c \
	ft_putnbr_unsigned.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putvoid.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re

