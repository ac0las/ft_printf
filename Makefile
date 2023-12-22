# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 19:37:28 by acolas-l          #+#    #+#              #
#    Updated: 2023/12/20 19:44:47 by acolas-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB =  ft_printf.h
RM = rm -rf
CC = gcc
AR = ar crs
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchar.c



OBJS = $(SRC:.c=.o)
all:	$(NAME)
$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re