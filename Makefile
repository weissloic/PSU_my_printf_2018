CC	=	gcc
CFLAGS = -I../include/ -L./lib/my -lmy -g

SRC_TEST = 	tests/test_my_printfthree.c \
			tests/test_my_printftwo.c \
			tests/test_my_printffour.c \
			tests/test_my_printfone.c \
		   	lib/my/adresspointer.c \
			lib/my/base.c \
			lib/my/printfunc.c \
			lib/my/my_strcpy.c \
			lib/my/printfdeux.c \
			lib/my/printftrois.c \
			lib/my/my_put_nbr.c \
			lib/my/my_put_nbr2.c \
			lib/my/my_putchar.c \
			lib/my/my_putstr.c \
			lib/my/my_putstroctal.c \
			lib/my/my_strlen.c \
			lib/my/my_printf.c

OBJ_TEST = $(SRC_TEST:.c=.o)
	
NAME_TEST = unit

NAME	=	eval_expr

MAIN	= 	main.c

REMOVE	=	remove_space.c

OPERATION	=	operation.c

all:	$(NAME)

$(NAME): 
	@make -sC lib/my
	

test_run: lib/my $(OBJ_TEST)
	$(CC) -o $(NAME_TEST) $(OBJ_TEST) $(CFLAGS) --coverage -lcriterion
	./$(NAME_TEST)
	


clean:
	rm -f *~ *#

fclean: clean
	rm -f $(NAME)

re: fclean all clean