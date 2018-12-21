##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	window.c	\
		object.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-I ./include

CSF	=	-l csfml-graphics -l csfml-window -l csfml-system

LIB 	=	-L ./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(CSF)

clean:
	rm -f $(OBJ)
	make -sC ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re: fclean all
