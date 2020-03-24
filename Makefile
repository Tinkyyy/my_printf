##
## ETNA PROJECT, 19/03/2020 by belgue_s
## Makefile
## File description:
##      Compile my_printf && Manage libs
##

NAME    =   my_printf

SRC     =   src/main.c

CFLAGS  =   -Wall -Wextra -Werror

CPPFLAGS	=	-I./lib/my/lib/

MACHINE	=	$(shell uname -m)

SYSTEM	=	$(shell uname -s)

STATIC_NAME = lib/my/libmy_printf_$(MACHINE)-$(SYSTEM).a

all:    $(NAME)

$(NAME):
			make -C lib/my

src:
			gcc -o $(NAME) $(CFLAGS) $(SRC) $(STATIC_NAME) $(CPPFLAGS) -L./lib/my/ -fPIC

my_printf_static:
			make -C lib/my my_printf_static

my_printf_dynamic:
			make my_printf_dynamic -C lib/my

clean:
			make clean -C lib/my

fclean:     clean
			make fclean -C lib/my
			rm -f $(NAME)

re:         fclean all

.PHONY:     all my_printf_static my_printf_dynamic src clean fclean re
