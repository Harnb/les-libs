# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlachau <rlachau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 18:00:32 by rlachau           #+#    #+#              #
#    Updated: 2022/02/14 12:21:18 by rlachau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c\
		ft_itoa.c\
		ft_putendl_fd.c\
		ft_strlcat.c\
		ft_substr.c\
		ft_bzero.c\
		ft_putnbr_fd.c\
		ft_strlcpy.c\
		ft_tolower.c\
		ft_calloc.c\
		ft_memchr.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_toupper.c\
		ft_isalnum.c\
		ft_memcmp.c\
		ft_split.c\
		ft_strmapi.c\
		ft_isalpha.c\
		ft_memcpy.c\
		ft_strchr.c\
		ft_strncmp.c\
		ft_isascii.c\
		ft_memmove.c\
		ft_strdup.c\
		ft_strnstr.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_striteri.c\
		ft_strrchr.c\
		ft_isprint.c\
		ft_putchar_fd.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

OBJS =	${SRCS:.c=.o}\
		ft_printf/libftprintf.a\

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	make all -C ft_printf
	${AR} ${NAME} ${OBJS}
	
all: ${NAME}

clean:
	${RM} ${OBJS}
	make clean -C ft_printf

fclean: clean
	${RM} ${NAME}
	make clean -C ft_printf

re: fclean all

.PHONY: all re clean fclean
