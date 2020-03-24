##
## ETNA PROJECT, 17/03/2020 by belgue_s
## MakeFile
## File description:
##      Compile my project
##

MACHINE	=	$(shell uname -m)

SYSTEM	=	$(shell uname -s)

STATIC_NAME = libmy_printf_$(MACHINE)-$(SYSTEM).a

DYNAMIC_NAME = libmy_printf_$(MACHINE)-$(SYSTEM).so

SRC	=	./lib/my_putstr.c	\
		./lib/my_putchar.c	\
		./lib/my_putnbr.c	\
		./lib/my_put_unsigned_nbr.c	\
		./lib/my_put_unsigned_nbr_hex.c	\
		./lib/my_putoctal.c	\
		./lib/my_putdouble.c	\
		./lib/my_strlen.c	\
		./lib/my_strcmp.c	\
		./lib/my_printf.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

all:	my_printf_dynamic my_printf_static

my_printf_static:	$(STATIC_NAME)

my_printf_dynamic:	$(DYNAMIC_NAME)

$(STATIC_NAME):	$(OBJ)
			ar -rc $(STATIC_NAME) $(OBJ)

$(DYNAMIC_NAME):	$(OBJ)
			gcc -shared -o $(DYNAMIC_NAME) $(CFLAGS) $(OBJ) -fPIC

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(STATIC_NAME)
			rm -f $(DYNAMIC_NAME)

re:		fclean all

.PHONY:	all my_printf_static my_printf_dynamic clean fclean re
