# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: eutrodri <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/05 11:59:15 by eutrodri      #+#    #+#                  #
#    Updated: 2020/02/21 01:09:04 by eutrodri      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = handle_till_6.c push.c sort_position.c back_to_first_note.c\
	 head_and_tail.c reverse_rotate.c ss.c check_if_sort.c hop.c\
	 rotate.c swap.c close_pos_b.c close_pos_a.c sort_alg1.c elem_in_stack.c\
	 make_elem.c valid.c handle_3_args.c print_stack.c\
	 sort_b_stack.c in_or_out_loop.c free_stack.c arg_in_stack.c\
	 print_swap_options.c one_arg.c

OBJ = handle_till_6.o push.o sort_position.o back_to_first_note.o\
	 head_and_tail.o reverse_rotate.o ss.o check_if_sort.o hop.o\
	 rotate.o swap.o close_pos_b.o close_pos_a.o sort_alg1.o elem_in_stack.o\
	 make_elem.o valid.o handle_3_args.o print_stack.o\
	 sort_b_stack.o in_or_out_loop.o free_stack.o arg_in_stack.o\
	 print_swap_options.o one_arg.o


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
#	@ar rcs $(NAME) $(OBJ)
#	@ranlib $(NAME)
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
