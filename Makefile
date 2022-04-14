##
## EPITECH PROJECT, 2022
## My_hunter
## File description:
## Makefile
##

SRC			=	src/main.c

SRC_TEST	=	tests/test_unitaires.c

TEST_OBJ	=	$(SRC_TEST:.c=.o)

TEST_NAME	=	unit_tests

OBJ			=	$(SRC:.c=.o)

NAME		=	my_hunter

LIB_FLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CPPFLAGS	=	-I ./include/

CFLAGS		=	-Wall -Wextra

TESTS_LDFLAGS	=	--coverage -lcriterion

CC			=	gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB_FLAGS)

debug: CFLAGS += -g3
debug: re

units_tests:	all $(TEST_OBJ)
	$(CC) -o $(TEST_NAME) $(OBJ) $(LIB_FLAGS) $(TEST_OBJ) $(TESTS_LDFLAGS) $(CPPFLAGS) $(CFLAGS)

tests_run: unit_test
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr -b --exclude tests/

clean:
	$(RM) $(OBJ)
	$(RM) $(TEST_OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_TEST)

re: fclean all

./PHONY: all unit_tests tests_run clean fclean re