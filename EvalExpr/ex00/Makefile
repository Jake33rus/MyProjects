# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 23:38:05 by bcasper           #+#    #+#              #
#    Updated: 2018/09/09 23:38:06 by bcasper          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		eval_expr
FLAGS		=		-Wall -Wextra -Werror
OPTIONS		=		-c -I./includes/
SRC			=		main.c calc_funcs.c eval_expr.c \
ft_putchar.c ft_putnbr.c ft_atoi.c \
eval_expr_addit.c eval_expr_addit2.c
OBJ			=		main.o calc_funcs.o eval_expr.o ft_putchar.o \
ft_putnbr.o ft_atoi.o eval_expr_addit.o eval_expr_addit2.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
