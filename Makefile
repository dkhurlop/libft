# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkhurlop <dkhurlop@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 17:37:57 by dkhurlop          #+#    #+#              #
#    Updated: 2023/04/03 12:11:10 by dkhurlop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_memmove.c ft_strlen.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

DEPS = $(SRCS:.c=.d)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -MMD

RM = rm -rf

AR = ar rcs

%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS) 
		 $(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
