NAME = Brain

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean