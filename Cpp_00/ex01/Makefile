NAME = phonebook

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
	Contact.cpp\
	PhoneBook.cpp	

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp PhoneBook.hpp Contact.hpp
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