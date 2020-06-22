# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: eutrodri <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/18 14:27:01 by eutrodri      #+#    #+#                  #
#    Updated: 2020/02/21 00:52:55 by eutrodri      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = checker

SRCS = checker.c push.c back_to_first_note.c reverse_rotate.c ss.c\
	 check_if_sort.c rotate.c elem_in_stack.c make_elem.c valid.c\
	 free_stack.c arg_in_stack.c read_instruct.c one_arg.c

OBJ = checker.o push.o back_to_first_note.o reverse_rotate.o ss.o\
	 check_if_sort.o rotate.o elem_in_stack.o make_elem.o valid.o\
	 free_stack.o arg_in_stack.o read_instruct.o one_arg.o

COLOR_GREEN = $(shell printf "\e[38;5;10m")
COLOR_RED = $(shell printf "\e[31;5;10m")
COLOR_YELLOW = $(shell printf "\e[33;5;10m")
COLOR_DEFAULT = $(shell printf "\e[39m")
NORM = norminette $(SRCS) | grep -e "Error" -e "Warning" -B 1
PRINT_PLUS = $(shell printf '$(COLOR_GREEN)[ + ]$(COLOR_DEFAULT)')
PRINT_CLEAN = $(shell printf '$(COLOR_RED)[ - ]$(COLOR_DEFAULT)')
PROCESS = $(shell printf '$(COLOR_YELLOW)[ › ]$(COLOR_DEFAULT)')


FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	@echo "$(PROCESS) $(COLOR_YELLOW)COMPILING$(COLOR_DEFAULT)"
	@make -C ../libft/
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Libft Done$(COLOR_DEFAULT)"
	@gcc $(FLAGS) -c $(SRCS) -I .
	@mv ../libft/libft.a .
	@gcc $(FLAGS) -o $(NAME) $(OBJ) -I . libft.a
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Done$(COLOR_DEFAULT)"

clean:
	@make clean -C ../libft/
	@rm -f $(OBJ)
	@echo "$(PRINT_CLEAN) $(COLOR_RED)Removed .o files$(COLOR_DEFAULT)"

fclean: clean
	@make fclean -C ../libft/
	@rm -f $(NAME)
	@rm -f libft.a
	@echo "$(PRINT_CLEAN) $(COLOR_RED)Removed libary$(COLOR_DEFAULT)"

re: fclean all

norm:
	@echo "===================NORMINETTE==================="
	@$(NORM) || echo "no norminette errors"
	@echo "================================================"
