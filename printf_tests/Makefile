SRC_NAME = #conv_test.c length_mod_test.c mix_test.c preci_test.c width_test.c \
ub_test.c random_test.c
SRC_PATH = tests/
OBJ_PATH = obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
NAME = run_tests
CC = gcc -g3
CFLAGS = -w
SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	cd .. && make
	$(CC) main.c -o $(NAME) $(OBJ) ../libftprintf.a

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all
	cd .. && make re

xd: re
	clear

val: re
	clear
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --suppressions=suppressions.txt ./run_tests

.PHONY: all, clean, fclean, re
