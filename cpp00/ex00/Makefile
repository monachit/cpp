NAME=megaphone
CC=c++
FLAGS= -Wall -Wextra -Werror
SRCC= megaphone.cpp
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