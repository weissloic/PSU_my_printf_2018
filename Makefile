CC	=	gcc

NAME	=	eval_expr

MAIN	= 	main.c

REMOVE	=	remove_space.c

OPERATION	=	operation.c

all:	$(NAME)

$(NAME):
	@make -sC lib/my

clean:
	rm -f *~ *#

fclean: clean
	rm -f $(NAME)

re:	fclean all clean