NAME = phonebook

SRC = main.cpp phonebook.cpp contacts.cpp

CPPC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
