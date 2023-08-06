# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zvakil <zvakil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 14:42:25 by zvakil            #+#    #+#              #
#    Updated: 2023/08/06 19:00:08 by zvakil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_B = $(BONUS:.c=.o)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -f $(OBJ) $(OBJ_B)

re: fclean all

fclean: clean
		rm -f $(NAME) $(bonus)

bonus: $(NAME) $(OBJ_B)
		ar -rcs $(NAME) $(OBJ_B)