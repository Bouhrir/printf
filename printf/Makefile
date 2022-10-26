# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 13:31:46 by obouhrir          #+#    #+#              #
#    Updated: 2022/10/26 19:12:00 by obouhrir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a

SRC 	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hexad.c \
ft_putunsign.c ft_adresse.c

OBJ 	= ${SRC:.c=.o}

RM		= rm -f

CC      = gcc

CFLAGS	= -Wall -Wextra -Werror

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJ}
		ar -rcs ${NAME} ${OBJ}

all     : ${NAME}

clean 	: 
		${RM} ${OBJ}

fclean 	: clean
		${RM} ${NAME}

re 		: fclean all

.PHONY	: all clean fclean re