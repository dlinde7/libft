# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlinde <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:38:37 by dlinde            #+#    #+#              #
#    Updated: 2019/05/23 12:19:29 by dlinde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = *.o

CC	=	gcc

FLAGS = -Wall -Wextra -Werror

FILES = *.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
