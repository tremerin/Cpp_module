NAME 	= phonebook
SRC		= Contact.cpp Phonebook.cpp main.cpp
HEADER	= Contact.hpp Phonebook.hpp
CC 		= c++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		= rm -rf
OBJ		= $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY : all clean fclean re