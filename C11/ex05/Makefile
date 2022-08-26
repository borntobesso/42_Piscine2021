# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 21:04:49 by sojung            #+#    #+#              #
#    Updated: 2021/11/02 12:05:14 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : do-op.o do-op2.o
	$(CC) $(CFLAGS) -o $@ do-op.o do-op2.o

do-op.o : do-op.c
	$(CC) $(CFLAGS) -o do-op.o -c do-op.c

do-op2.o : do-op2.c
	$(CC) $(CFLAGS) -o do-op2.o -c do-op2.c

clean :
	rm -rf do-op.o do-op2.o

fclean : clean
	rm -f $(NAME)

re : fclean all
