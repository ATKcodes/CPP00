NAME	= Zombie
CC		= c++
CFLAG	= -std=c++98 -Wall -Wextra -Werror
SRCS	= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
