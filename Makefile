##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## CPD10ysk01
##

SRC	=	window.c		\
		back.c			\
		main.c			\
		character.c		\
		create_and_disp.c	\
		sound.c			\
		ingame.c		\
		my_clock.c		\
		my_put_sprite.c		\
		my_put_back.c		\
		new_object.c		\
		character_two.c		\
		end_tab.c		\
		my_menusp.c		\
		my_putmenusp.c		\
		my_menu.c		\
		my_txt.c		\
		destroy.c		\
		object.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CFLAGS	=	-I ./include -W -Wall -Wextra -Werror

CSF	=	-l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

LIB	=	-L ./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		gcc -o $(NAME) $(OBJ) $(LIB) $(CSF)

clean:
	rm -f $(OBJ)
	make -sC ./lib/my clean

fclean: clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re: fclean all
