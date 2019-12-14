NAME = LogoDuPauvre
SRC = src/main.c src/lil_ft.c src/parser.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror  -o $(NAME) $(SRC) -framework OpenGL -framework GLUT -framework Cocoa
clean:
	/bin/rm -f
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all