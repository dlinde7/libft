# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlinde <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:38:37 by dlinde            #+#    #+#              #
#    Updated: 2019/05/28 10:07:02 by dlinde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = *.o

CC	=	gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft.h

FILES = *.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(FILES) -I $(LIB)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
