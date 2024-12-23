NAME= Zombie1

SRCS= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS= $(SRCS:.cpp=.o)

CXX= g++

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
