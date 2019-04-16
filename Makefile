NAME = libft.a

SRC = *.c

OBJ = *.o

HEADER = ./

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all