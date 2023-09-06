NAME = Materia

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

run: all
	@./$(NAME)

re: clean fclean all

.PHONY: all re fclean clean