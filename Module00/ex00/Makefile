NAME 	= megaphone
SRC		= megaphone.cpp
CC 		= g++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 		= rm -rf

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: fclean all

#echo $(NAME)