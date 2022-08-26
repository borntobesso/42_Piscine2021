# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 18:36:58 by sojung            #+#    #+#              #
#    Updated: 2021/11/01 12:14:14 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c\
ft_strlen.c ft_strcmp.c

OBJS = $(addprefix srcs/, ${SRCS:.c=.o})

HEADER = ./includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -I $(HEADER) -c $<

$(NAME) : $(OBJS)
	ar rc $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
