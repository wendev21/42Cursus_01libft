# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 17:43:29 by wecorzo-          #+#    #+#              #
#    Updated: 2023/01/19 17:44:48 by wecorzo-         ###   ########.fr        #
#                                                                              #
# ****************************************************************************#

NAME = libft.a
SRCS = ft_isalpha.c \
		 ft_isdigit.c \
		ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c\
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c
CC = gcc
CFLAGS += -Wall -Wextra -Werror
OBJECTS = $(SRCS:.c=.o)
$(NAME): $(OBJECTS)
all: $(NAME)
	ar rc libft.a $(OBJECTS)
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
