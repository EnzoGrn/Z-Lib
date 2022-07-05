##
## EPITECH PROJECT, 2022
## zlib
## File description:
## Makefile zlib
##

SRC += 	src/array/zarrdup.c \
		src/array/zarrealloc.c \
		src/array/zarrlen.c \
		src/array/zprintarr.c \
		src/array/zstr_to_array.c

SRC =   src/ctype/zisascii.c \
		src/ctype/zisneg.c \
		src/ctype/zissign.c \
		src/ctype/zisspace.c \
		src/ctype/zstrisalpha.c \
		src/ctype/zstrisalphanum.c \
		src/ctype/zstrislower.c \
		src/ctype/zstrisnum.c \
		src/ctype/zstrisprintable.c \
		src/ctype/zstrisupper.c \
		src/ctype/zstrtolower.c \
		src/ctype/ztolower.c \
		src/ctype/ztoupper.c

SRC +=  src/maths/zabs.c \
		src/maths/zis_prime.c \
		src/maths/zpower.c \
		src/maths/zprime_sup.c \
		src/maths/zsqrt.c \
		src/maths/zswap.c

SRC += 	src/mem/zcalloc.c \
		src/mem/zfree_chararr.c \
		src/mem/zfree_intarr.c \
		src/mem/zfree.c \
		src/mem/zrealloc.c

SRC	+=	src/printf/zprintf.c \
		src/printf/print_base.c \
		src/printf/print_special.c \
		src/printf/print.c \
		src/printf/put_in_octal.c \
		src/printf/flags.c \

SRC += 	src/string/zatoi.c \
		src/string/zchar_in.c \
		src/string/zcount_occur.c \
		src/string/zitoa.c \
		src/string/zmemcpy.c \
		src/string/zmemset.c \
		src/string/zrevstr.c \
		src/string/zstrcapitalize.c \
		src/string/zstrcat.c \
		src/string/zstrcatchar.c \
		src/string/zstrchr.c \
		src/string/zstrcmp.c \
		src/string/zstrcpy.c \
		src/string/zstrdup.c \
		src/string/zstrlen.c \
		src/string/zstrncat.c \
		src/string/zstrncmp.c \
		src/string/zstrncpy.c \
		src/string/zstrstr.c

SRC +=  src/write/zperror.c \
		src/write/zputbase.c \
		src/write/zputchar.c \
		src/write/zputlong.c \
		src/write/zputnbr.c \
		src/write/zputstr.c \
		src/write/zputuns.c \
		src/write/zwrite.c

OBJ = $(SRC:.c=.o)

NAME	= libz.a

CFLAGS      += -I . -fvisibility=hidden -Wall -Wextra -Werror -W -Iinclude

SRC_COUNT    :=         $(words $(SRC))

NB           =         0

RM			=		rm -f

ECHO		=		/bin/echo -e
DEFAULT		=		"\033[00m"
BOLD		=		"\e[1m"
RED			=		"\e[31m"
GREEN		=		"\e[32m"
LIGHT_BLUE	=		"\e[94m"
WHITE		=		"\e[1;37m"

$(NAME):		$(OBJ)
			@(ar rc $(NAME) $(OBJ))
			@(mv $(NAME) ../)
			@($(ECHO) " ")
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Lib 'z' sucessfully build. "$(DEFAULT))

all:	$(NAME)

clean:
			@($(RM) $(NAME))
			@($(RM) $(OBJ))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Clean lib 'z' "$(DEFAULT))

fclean:		clean
			@($(RM) ../$(NAME))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Fclean lib 'z' "$(DEFAULT))

re:		fclean all

debug:	CFLAGS += -g
debug:	re
			@gcc -o $(NAME) $(OBJ) $(INCLUDE) $(CFLAGS) \
			&& $(ECHO) $(BOLD) $(GREEN)"► BUILD SUCCESS !"$(DEFAULT) \
			|| ($(ECHO) $(BOLD) $(RED)"► BUILD FAILED"$(DEFAULT) && exit 1)

%.o:		%.c
			@$(eval NB=$(shell echo $$(($(NB)+1))))
			@gcc -c -o $@ $^ $(CFLAGS) \
			&& python3 ./build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all clean fclean re debug %.o
