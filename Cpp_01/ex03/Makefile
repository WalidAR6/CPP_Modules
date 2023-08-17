NAME = unnecessary_v

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

run: all
	@./$(NAME)

re: clean fclean

.PHONY: all re fclean clean