# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlinde <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:38:37 by dlinde            #+#    #+#              #
#    Updated: 2019/05/23 11:11:31 by dlinde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = *.o

CC	=	gcc

FLAGS = -Wall -Wextra -Werror -I

FILES = *.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
