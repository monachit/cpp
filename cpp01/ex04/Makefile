NAME=read

SRC= main.cpp read.cpp

OBJ= $(SRC:.cpp=.o)

CXX= g++

CXXFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	CXX CXXFLAGS $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
