NAME = LogoDuPauvre
SRC = src/main.c src/lil_ft.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror  -o $(NAME) $(SRC)
clean:
	/bin/rm -f
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all