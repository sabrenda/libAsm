# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 01:40:14 by Ahmed             #+#    #+#              #
#    Updated: 2021/03/29 02:25:15 by Ahmed            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_strlen.s\
		ft_strcmp.s\
		ft_strcpy.s\
		ft_write.s\
		ft_read.s\
		ft_strdup.s

OBJ = $(SRC:.s=.o)

%.o: %.s
	@nasm -f macho64 $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
