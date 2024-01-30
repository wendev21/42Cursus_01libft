# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 11:46:47 by wecorzo-          #+#    #+#              #
#    Updated: 2024/01/30 07:39:18 by wecorzo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# Libft
SRCS=					ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_itoa.c\
						ft_strrchr.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_split.c\
						ft_putnum.c\
						ft_len.c\
						ft_putnbrint.c\
						ft_printhex.c\
						get_next_line.c\
						ft_printf.c

OBJS			= $(SRCS:.c=.o)

# Lists
SRCSB			= ft_lstnew_bonus.c \
		 ft_lstadd_front_bonus.c \
		 ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c \
		 ft_lstadd_back_bonus.c \
		 ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c \
		 ft_lstiter_bonus.c \
		 ft_lstmap_bonus.c

OBJSB			= $(SRCSB:.c=.o)

# Compiler
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

# Rules
all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $^

bonus:			$(NAME) $(OBJSB)
			    @ar rcs $^

clean:
				@$(RM) $(OBJS) $(OBJSB)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
