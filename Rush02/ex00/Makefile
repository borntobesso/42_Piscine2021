# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 13:10:03 by sojung            #+#    #+#              #
#    Updated: 2021/10/31 13:34:11 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = main.c opentest.c print.c

OBJS = main.o opentest.o print.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $^

clean :
	rm -rf *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
