
CC	=	gcc

NAME	 =	orderList.out 

SRC	=	main.c 		\
		my_str.c 	\
		base.c 		\
		check_opt.c 	\
		create_list.c 	\
		order_list.c 	\
		selection_sort.c \
		bubble_sort.c 	\
		insertion_sort.c \
		free_everything.c

FLAG	=	-W -Wall

OBJ	=	$(SRC:.c=.o)

all:		$(NAME) 

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all