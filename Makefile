# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmonahan <mmonahan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/19 01:02:44 by mmonahan          #+#    #+#              #
#    Updated: 2019/01/19 04:23:31 by mmonahan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./libft/libft.a

all: #$(NAME)

#$(NAME):
		gcc -Wall -Wextra -Werror get_next_line.c get_next_line.h $(NAME)
		./a.out test.txt

clean:
		rm -f *.gch

fclean: clean
		rm -f a.out

re: fclean all
