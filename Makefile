##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

BUILD_DIR	=	build

SRC	=	src/main.c		\
		\
		src/str_split.c		\
		src/str_split_2.c	\
		src/my_calloc.c		\
		src/itoa.c		\
		src/dtostr.c		\
		\
		src/calcul.c			\
		src/separate_members.c		\
		src/mul_or_div.c		\
		src/add_or_sub.c		\
		src/member_replace.c

OBJ	=	$(SRC:%.c=$(BUILD_DIR)/%.o)

LIBNAME	=	lib.a

NAME	=	equation

CFLAGS	=	-Wall -Werror -Wextra -I./include -g

$(BUILD_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@gcc $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	gcc -o $(NAME) $(CFLAGS) $(SRC)

clean:
	rm -rf $(BUILD_DIR)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
