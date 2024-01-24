# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 19:37:28 by acolas-l          #+#    #+#              #
#    Updated: 2024/01/24 11:17:39 by acolas-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = ft_printf.h
RM = rm -f
CC = gcc
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
SRC =  ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_unsint.c\
	ft_putptr.c\
	ft_puthexa.c\

.PHONY: all clean fclean re bonus

OBJS = $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
