# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 20:02:16 by tdelgran          #+#    #+#              #
#    Updated: 2023/01/09 16:01:23 by tdelgran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c utilitaires.c main.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
all : $(NAME)

.c.o:
		gcc -Wall -Wextra -Werror -c -I ./includes $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re