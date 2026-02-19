# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 18:13:35 by mnachit           #+#    #+#              #
#    Updated: 2025/02/20 18:18:59 by mnachit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=main
CC=c++
FLAGS= -Wall -Wextra -Werror
SRCC= main.cpp Contact.cpp PhoneBook.cpp
OSRC = $(SRCC:.cpp=.o)

all : $(NAME)

$(NAME): $(OSRC)
	$(CC) $(FLAGS) -o $(NAME) $(OSRC)
	
clean:
	rm -f $(OSRC)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re 