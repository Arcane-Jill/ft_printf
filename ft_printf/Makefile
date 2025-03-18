# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmeintje <nmeintje@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 10:41:21 by nmeintje          #+#    #+#              #
#    Updated: 2024/05/17 10:41:16 by nmeintje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ./ft_print_addr.c \
	   ./ft_print_char.c \
	   ./ft_print_hex.c \
	   ./ft_print_nbr.c \
	   ./ft_print_str.c \
	   ./ft_print_unsigned.c \
	   ./ft_printf.c \
	   ./ft_strlen.c

OBJS = $(SRCS:.c=.o)

HEAD = ft_printf.h

AR = ar -rc

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

LIBS = ranlib

CC = cc

CFLAG = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAG} -c -I ${HEAD} $< -o ${<:.c=.o}

RM = rm -r

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
