##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A makefile
##

SRC = $(shell find . -type f -name '*.c')

OBJ = $(SRC:.c=.o)

NAME = libmy.a

NAMEA = my.h

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../$(NAME)
	cp $(NAMEA) ../../include/$(NAMEA)
	make clean

clean : $(shell rm -f $(OBJ))

fclean: clean
	rm -f $(NAME)

re: fclean all
