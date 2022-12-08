# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdelgran <tdelgran@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 20:02:16 by tdelgran          #+#    #+#              #
#    Updated: 2022/12/08 15:03:21 by tdelgran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c format_putstr.c format_char.c

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