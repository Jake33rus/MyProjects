# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcasper <bcasper@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 11:00:55 by bcasper           #+#    #+#              #
#    Updated: 2018/09/06 11:12:22 by bcasper          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
SRCS = ft_display_file.c ft_print.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
