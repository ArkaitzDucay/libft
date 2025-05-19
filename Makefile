# ----------------------
#        LIBFT
# ----------------------

NAME    = libft.a

# Archivos fuente: todos menos main.c
SRC     = $(filter-out main.c, $(wildcard *.c))
OBJ     = $(SRC:.c=.o)

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

# ----------------------
#      TEST PROGRAM
# ----------------------

TEST_NAME = test.exe
TEST_SRC  = main.c
TEST_OBJ  = $(TEST_SRC:.c=.o)

# ----------------------
#        RULES
# ----------------------

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_SRC) -L. -lft -o $(TEST_NAME)

clean:
	rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re test