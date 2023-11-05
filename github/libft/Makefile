OBJ= $(SRC:%.c=%.o)
CC = clang
CFLAGS = -Wall -Wextra -Werror
NAME= libft
SRC= $(wildcard *.c)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	ar -crs libft.a $(OBJ)

clean:
	rm -rf *.o
fclean:
	-rm -rf bob
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)
