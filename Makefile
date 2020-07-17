##
## EPITECH PROJECT, 2019
## my_defender
## File description:
## makefile
##

SRC	=	create_window.c				\
		create_window2.c			\
		main.c					\
		init_struct.c				\
		./help_function/int_to_array.c		\
		./help_function/my_putstr.c		\
		./help_function/my_strlen.c		\
		./help_function/my_revstr.c		\
		./help_function/my_putchar.c		\
		my_menu.c				\
		get_page.c				\
		get_page3.c				\
		my_texts.c				\
		about_cursor.c				\
		pause_state.c				\
		second_move3.c				\
		double.c				\
		read_file.c				\
		column_words.c				\
		make_move.c				\
		make_move2.c				\
		my_sound.c				\
		about_bomb.c				\
		get_page2.c				\
		get_page4.c				\
		second_move2.c				\
		destroy_all.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-I ./include \
		-l csfml-graphics -l csfml-audio -l csfml-window \
		-l csfml-system -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
