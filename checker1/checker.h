/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/18 14:13:32 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/19 15:26:28 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/includes/libft.h"

typedef struct			s_stack
{
	int					i;
	int					pos;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

void					first_elem(t_stack **a, t_stack **b, char *arg);
void					arg_in_stack(int argc, char **argv, t_stack **a);
void					make_elem(t_stack **a, char *i);
int						valid(char **argv);
void					free_stack(t_stack **a);
void					back_to_first_note(t_stack **s);
void					back_to_last_note(t_stack **s);

void					ss(t_stack **a, t_stack **b);
void					sa(t_stack **a);
void					sb(t_stack **b);

void					push(t_stack **dst, t_stack **src);
void					rotate(t_stack **s);
void					rotate_rotate(t_stack	**a, t_stack **b);

void					reverse_rotate(t_stack **s);
void					reverse_reverse(t_stack	**a, t_stack **b);
void					read_instruct(t_stack **a, t_stack **b);
int						it_is_sort(t_stack **a, t_stack **b, int elem);
int						one_arg(char **argv, t_stack **a, t_stack **b);

#endif
