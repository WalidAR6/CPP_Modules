NAME = brainz

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Zombie.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean