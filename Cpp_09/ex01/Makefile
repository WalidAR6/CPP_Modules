NAME = RPN 

FLAG = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
CC = c++

SRC = main.cpp \
		RPN.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp RPN.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean
