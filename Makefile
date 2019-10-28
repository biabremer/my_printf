# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dfreire <dfreire@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/04/09 14:47:28 by dfreire        #+#    #+#                 #
#    Updated: 2019/10/28 12:19:03 by bbremer       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf initialise_varargs getting_flags print_parsed_values\
	ctostr handling_o handling_x handling_u handling_f handling_di\
	handling_p handling_c print_null getting_fmt handling_flags\
	support_functions handling_precision_width

LIB_FILES = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove\
	ft_memchr ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy\
	ft_strcat ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr\
	ft_strnstr ft_strcmp ft_strncmp ft_atoi ft_isalpha\
	ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper\
	ft_tolower ft_memalloc ft_memdel ft_strnew ft_strdel ft_strclr\
	ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ\
	ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit ft_itoa\
	ft_putchar ft_putstr ft_putendl ft_putnbr ft_putchar_fd\
	ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstdelone\
	ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_memdup\
	ft_whitespace ft_swap ft_caesarcipher ft_caesarcipher_decrypt\
	ft_sqrt ft_count_if ft_writeincolours ft_strndup ft_numlen\
	ft_numlen_base ft_itoa_base ft_ftoa ft_putchar_int ft_putnbr_base\
	ft_put_pointer ft_putstr_int ft_put_binary ft_atof

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = includes/
LIB_DIR = libft/
TEST_DIR = tests/

LIBSRC = $(addprefix $(LIB_DIR), $(addsuffix .c,$(LIB_FILES)))
LIBOBJ = $(addprefix $(LIB_DIR), $(addsuffix .o,$(LIB_FILES)))
LIBFT= ./libft/libft.a
LIBINC= -I./libft
LIBLINK= -L./libft -lft

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c,$(FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o,$(FILES)))

HEADER = ft_printf.h
FLAGS = -Wall -Wextra -Werror

END:="\033[0;0m"
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(FLAGS) $(LIBINC) -I $(INC_DIR) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	@echo $(CYAN) " - Compiling Library" $(END)
	@make -C ./libft
	@echo $(GREEN) " - Done" $(END)

$(NAME): obj libft $(OBJ)
	@echo $(CYAN) " - Compiling $@" $(END)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo $(GREEN) " - Done" $(END)

libclean:
	@rm -rf $(LIBFT)

libfclean: 
	@rm -rf $(LIBOBJ)

clean: libclean
	@echo $(CYAN) " - Deleting objects $@" $(END)
	@rm -f $(OBJ) $(LIBOBJ)
	@rmdir $(OBJ_DIR)
	@make -C ./libft/ clean
	@echo $(GREEN) " - Done" $(END)

fclean: clean libfclean
	@echo $(CYAN) " - Deleting executables $@" $(END)
	@rm -f $(NAME)
	@rm -f test
	@rm -f libft.a
	@make -C ./libft/ fclean
	@echo $(GREEN) " - Done" $(END)

test: all
	@gcc $(FLAGS) -o test tests/main.c libftprintf.a $(LIBFT)

re: fclean all

.PHONY: all clean make fclean re libft libclean libfclean