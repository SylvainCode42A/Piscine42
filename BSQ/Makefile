SRC =	convert_tab_int_2.c\
		convert_tab_int.c\
		find_replace.c\
		ft_split.c\
		main.c\
		map_is_ok_ext.c\
		map_is_ok.c\
		map_is_ok_ext_ext.c\
		run_program.c\


OBJ =	$(SRC:.c=.o)

CFLAGS =	-Wall -Wextra -Werror

NAME = bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	cc $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
