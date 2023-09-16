NAME = Fixed

FLAG = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = main.cpp\
		Fixed.cpp\
		Point.cpp\
		bsp.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp Fixed.hpp Point.hpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean