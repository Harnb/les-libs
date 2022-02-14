# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlachau <rlachau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 12:49:42 by rlachau           #+#    #+#              #
#    Updated: 2022/02/14 14:01:52 by rlachau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FT_PRINTF = libftprintf.a
LIBFT = libft.a
C_FLAGS = -g -Wall -Werror -Wextra
HEADER = -I includes
PF_HEAD = ./includes/ft_printf.h
LFT_HEAD = ./includes/libft.h

SRC_DIR = src/
OBJ_DIR = obj/
PF_DIR = ft_printf/
LFT_DIR = libft/
GNL_DIR = gnl/

LFT_SRC =	alphas.c\
			digitcount.c\
			ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstlast.c\
			ft_lstmap.c\
			ft_lstnew.c\
			ft_lstsize.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strncmp.c\

GNL_SRC =	get_next_line.c\
			get_next_line_utils.c\
			get_next_line_bonus.c\
			get_next_line_utils_bonus.c\

PF_SRC =	ft_printf.c\
			ft_put_p.c\
			ft_putchar.c\
			ft_putnbr_base.c\
			ft_putstr.c\
			ft_putunbr_base.c\
			ft_search_type.c\

LFT_OBJ = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(LFT_SRC)))
PF_OBJ = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(PF_SRC)))
GNL_OBJ = $(addprefix $(OBJ_DIR), $(patsubst %.c, %.o, $(GNL_SRC)))

all: $(FT_PRINTF)

$(FT_PRINTF): $(LFT_OBJ) $(PF_OBJ)
	@ar rc $@ $^
	ranlib $@
$(LIBFT): $(LFT_OBJ) $(GNL_OBJ)
	@ar rc $@ $^
	ranlib $@

$(OBJ_DIR)%.o: $(SRC_DIR)$(LFT_DIR)%.c $(LFT_HEAD) $(GNL_HEAD)
	@mkdir -p $(OBJ_DIR)
	gcc $(C_FLAGS) -c $< -o $@ $(HEADER)
$(OBJ_DIR)%.o: $(SRC_DIR)$(PF_DIR)%.c $(PF_HEAD) $(LFT_HEAD) $(GNL_HEAD)
	@mkdir -p $(OBJ_DIR)
	gcc $(C_FLAGS) -c $< -o $@ $(HEADER)
$(OBJ_DIR)%.o: $(SRC_DIR)$(GNL_DIR)%.c $(GNL_HEAD) $(LFT_HEAD)
	@mkdir -p $(OBJ_DIR)
	gcc $(C_FLAGS) -c $< -o $@ $(HEADER)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(LIBFT)
	@rm -f $(FT_PRINTF)

re: fclean all