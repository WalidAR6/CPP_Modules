NAME = account

FLAG =  -std=c++98

CC = c++

SRC = tests.cpp\
		Account.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Account.hpp
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