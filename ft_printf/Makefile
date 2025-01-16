# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 11:18:03 by hkhairi           #+#    #+#              #
#    Updated: 2024/11/30 21:38:27 by hkhairi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =ft_handle_char.c		ft_handle_str.c ft_printf.c ft_extract.c ft_handle_decimal.c ft_handle_pointer.c ft_handle_integer.c	\
	ft_handle_unsigned_decimal.c	ft_handle_number_hexadecimal.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all 

.PHONY: clean