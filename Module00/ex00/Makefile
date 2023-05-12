NAME 	= megaphone
SRC		= megaphone.cpp
CC 		= g++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		= rm -rf
OBJ		= $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY : all clean fclean re
