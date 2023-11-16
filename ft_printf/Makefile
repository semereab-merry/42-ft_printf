# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msemerea <msemerea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 18:16:29 by msemerea          #+#    #+#              #
#    Updated: 2023/09/07 19:30:01 by msemerea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra 

FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putuint.c \
		ft_puthex.c ft_putptr.c


OBJECTS = $(FILES:.c=.o)


NAME = libftprintf.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^


clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
