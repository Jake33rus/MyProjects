# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 19:52:55 by bcasper           #+#    #+#              #
#    Updated: 2018/09/09 21:56:49 by bcasper          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	colle-2

FLAG =	-Wall -Wextra -Werror -o

SRC =	rush02.c print_function.c rush0.c rush1.c rush2.c rush3.c rush4.c \
ft_strcmp.c

OBJS =	rush02.o print_function.o rush0.o rush1.o rush2.o rush3.o rush4.o \
ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(NAME) $(SRC)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
