# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: eutrodri <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/02/20 01:55:12 by eutrodri      #+#    #+#                  #
#    Updated: 2020/02/22 12:26:37 by eutrodri      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = checker

NAME2 = push_swap


COLOR_GREEN = $(shell printf "\e[38;5;10m")
COLOR_RED = $(shell printf "\e[31;5;10m")
COLOR_YELLOW = $(shell printf "\e[33;5;10m")
COLOR_DEFAULT = $(shell printf "\e[39m")
NORM = norminette $(SRCS) | grep -e "Error" -e "Warning" -B 1
PRINT_PLUS = $(shell printf '$(COLOR_GREEN)[ + ]$(COLOR_DEFAULT)')
PRINT_CLEAN = $(shell printf '$(COLOR_RED)[ - ]$(COLOR_DEFAULT)')
PROCESS = $(shell printf '$(COLOR_YELLOW)[ › ]$(COLOR_DEFAULT)')


FLAGS = -Wall -Werror -Wextra

all: $(NAME) $(NAME2)

$(NAME) :
	@echo "$(PROCESS) $(COLOR_YELLOW)COMPILING$(COLOR_DEFAULT)"
	@make -C checker1/
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Libft Done$(COLOR_DEFAULT)"
	@mv checker1/checker .
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Done$(COLOR_DEFAULT)"

$(NAME2) :
	@echo "$(PROCESS) $(COLOR_YELLOW)COMPILING$(COLOR_DEFAULT)"
	@make -C push_swap1/
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Libft Done$(COLOR_DEFAULT)"
	@mv push_swap1/push_swap .
	@echo "$(PRINT_PLUS) $(COLOR_GREEN)Done$(COLOR_DEFAULT)"

clean:
	@make clean -C push_swap1/
	@make clean -C checker1/
	@echo "$(PRINT_CLEAN) $(COLOR_RED)Removed .o files$(COLOR_DEFAULT)"

fclean: clean
	@make fclean -C checker1/
	@make fclean -C push_swap1/
	@rm -f $(NAME)
	@rm -f $(NAME2)
	@echo "$(PRINT_CLEAN) $(COLOR_RED)Removed Executable$(COLOR_DEFAULT)"

re: fclean all

norm:
	@echo "===================NORMINETTE==================="
	@$(NORM) || echo "no norminette errors"
	@echo "================================================"
