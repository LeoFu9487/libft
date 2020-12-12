# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 12:17:32 by yfu               #+#    #+#              #
#    Updated: 2020/12/12 15:43:29 by yfu              ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc

FLAGS = -Wall -Wextra -Werror -std=c99

SRCS = ft_lstlast.c	ft_split.c \
ft_abs.c ft_lstmap.c ft_strchr.c \
ft_atoi.c		ft_lstnew.c		ft_strdup.c \
ft_bzero.c		ft_lstsize.c		ft_strjoin.c \
ft_calloc.c		ft_memccpy.c		ft_strlcat.c \
ft_isalnum.c		ft_memchr.c		ft_strlcpy.c \
ft_isalpha.c		ft_memcmp.c		ft_strlen.c \
ft_isascii.c		ft_memcpy.c		ft_strmapi.c \
ft_isdigit.c		ft_memmove.c		ft_strncmp.c \
ft_isprint.c		ft_memset.c		ft_strnstr.c \
ft_itoa.c			ft_strrchr.c 	ft_isspace.c\
ft_lstadd_back.c	ft_putchar.c		ft_strtrim.c \
ft_lstadd_front.c	ft_putendl.c		ft_substr.c \
ft_lstclear.c		ft_putnbr.c		ft_tolower.c \
ft_lstdelone.c		ft_putstr.c		ft_toupper.c \
ft_lstiter.c		ft_sort.c

HEADER = libft.h

OBJECTS = *.o

all : $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)
re: fclean all
