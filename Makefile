# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 11:46:47 by wecorzo-          #+#    #+#              #
#    Updated: 2023/02/01 16:56:55 by wecorzo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_strdup.o ft_calloc.o ft_putnbr_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putstr_fd.o ft_putchar_fd.o ft_strnstr.o    ft_strnstr.o  ft_memcmp.o ft_memchr.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs libft.a $(OBJS) libft.h
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
