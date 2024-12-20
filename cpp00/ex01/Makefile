NAME=PhoneBook

SRC=PhoneBook.cpp contact.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

CC= g++

CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re