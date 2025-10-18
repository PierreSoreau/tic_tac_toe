# Makefile

NAME = exercice_tic_tac_toe

SRCS = main.c \
	functions.c 
	
all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all