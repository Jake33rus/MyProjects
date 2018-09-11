# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 11:05:27 by bcasper           #+#    #+#              #
#    Updated: 2018/09/06 20:53:05 by bcasper          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_cat.c ft_prints.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_cat.o ft_prints.o

clean:
	/bin/rm -f ft_cat.o ft_prints.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
