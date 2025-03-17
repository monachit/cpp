NAME=main
CC=c++ -g
CFLAGS= -Wall -Wextra -Werror
SCRC= main.cpp Harl.cpp
OSCRC= $(SCRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OSCRC)
		$(CC) $(CFLAGS)  -o $(NAME) $(OSCRC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<  
	
clean :
	rm -rf $(OSCRC)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY = all clean fclean re