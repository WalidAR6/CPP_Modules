NAME = megaphone

FLAG = -Wall -Wextra -Werror -std=c++98

CC = g++

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp
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