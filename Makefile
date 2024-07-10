# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-amin <ael-amin@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 19:37:37 by ael-amin          #+#    #+#              #
#    Updated: 2022/10/23 21:37:17 by ael-amin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = CC

CFLAGS = -Wall -Wextra -Werror

DEPS = libft.h

SRC = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_strlen.c\
ft_memset.c ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c\
ft_strlcpy.c ft_memcmp.c ft_memchr.c ft_strchr.c ft_strncmp.c ft_strrchr.c\
ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_strtrim.c\
ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_strmapi.c ft_putnbr_fd.c\
ft_striteri.c ft_itoa.c ft_split.c\

OBJ = ${SRC:.c=.o}

BONUS_OBJS =  ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstsize_bonus.o ft_lstadd_front_bonus.o ft_lstnew_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o


.PHONY: clean fclean all

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
		 
all: $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ) 
	
bonus: $(NAME) $(OBJ) $(BONUS_OBJS)
	ar rsc $(NAME) $(OBJ) $(BONUS_OBJS)
	

clean:
	rm -rf *.o
fclean:
	rm -rf $(NAME)
	rm -rf *.o

re: fclean all
