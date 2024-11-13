NAME = pushswap.a

FLAGS = -Wall -Wextra -Werror 

CC = cc $(FLAGS)

AR = ar rcs

RM = rm -rf

SRC =	./src/push_swap.c  ./src/utils/ft_atoi.c ./src/utils/ft_lstadd_front.c \
		./src/utils/ft_lstnew.c ./src/utils/ft_lstadd_back.c ./src/utils/ft_lstlast.c \
		./src/utils/ft_isdigit.c ./src/utils/ft_strcmp.c ./src/utils/has_duplicate.c \
		

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

.c.o:
	@$(CC) -c $< -o $@

all: $(NAME)
	
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)	

re: fclean all 
