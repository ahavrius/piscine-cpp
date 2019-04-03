#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/22 13:27:22 by ahavrius          #+#    #+#              #
#    Updated: 2018/09/23 13:13:49 by ahavrius         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
FILE = *.c
OBJECT = *.o

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -o $(NAME) $(FILE)

clean :
	/bin/rm -f $(OBJECT)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
