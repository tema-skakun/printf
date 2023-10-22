# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdarkhaw <fdarkhaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 18:42:30 by fdarkhaw          #+#    #+#              #
#    Updated: 2021/11/17 12:58:06 by fdarkhaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

LIST		=	ft_printf.c		ft_putchar.c	ft_putstr.c		ft_putnbr.c\
				ft_putunbr.c	ft_putxnbr.c	ft_putxXnbr.c	ft_putpnbr.c

HEADER		= ft_printf.h

OBJ			= ${patsubst %.c,%.o,$(LIST)}

CC			= cc
FLAGS		= -Wall -Wextra -Werror

.PHONY		: all clean fclean re

all			: $(NAME)

$(NAME)		: $(OBJ) $(HEADER)
				ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all
