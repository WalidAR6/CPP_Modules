NAME = FragTrap

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean