# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-abde <mel-abde@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 10:47:10 by mel-abde          #+#    #+#              #
#    Updated: 2024/12/15 10:47:37 by mel-abde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFALGS = -Wall -Wextra -Werror
CC = cc
SRC = conversions/ft_putchar.c conversions/ft_putstr.c \
      conversions/ft_putnbr.c conversions/ft_puthex.c conversions/ft_putptr.c \
      conversions/ft_putun.c ft_printf.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJ) 
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re
