/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: eutrodri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 13:46:58 by eutrodri      #+#    #+#                 */
/*   Updated: 2020/02/22 14:04:22 by eutrodri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_H
# define SWAP_H

# include "../libft/includes/libft.h"

typedef struct			s_stack
{
	int					i;
	int					pos;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

typedef struct			s_options
{
	int					s;
	int					h;
}						t_options;

void					first_elem(t_stack **a, t_stack **b, char *arg);
int						one_arg(char **argv, t_stack **a, t_stack **b);
void					arg_in_stack(int argc, char **argv, t_stack **a);
void					make_elem(t_stack **a, char *i);
int						valid(char **argv);
void					position(t_stack **a, int elem);
void					sorting(t_stack **a, t_stack **b, int i);
int						elem_in_stack(t_stack **s);
void					free_stack(t_stack **a);

void					back_to_first_note(t_stack **s);
void					back_to_last_note(t_stack **s);
t_stack					*head(t_stack **s);
t_stack					*tail(t_stack **s);
int						it_is_sort(t_stack **a, int elem);
int						is_it_sort(t_stack **a, int p);

void					ss(t_stack **a, t_stack **b);
void					sa(t_stack **a);
void					sb(t_stack **b);

void					push_a(t_stack **dst, t_stack **src);
void					push_b(t_stack **dst, t_stack **src);

void					rotate(t_stack **s);
void					rotate_a(t_stack **s);
void					rotate_b(t_stack **s);
void					rotate_rotate(t_stack	**a, t_stack **b);

void					reverse_rotate(t_stack **s);
void					reverse_rotate_a(t_stack **s);
void					reverse_rotate_b(t_stack **s);
void					reverse_reverse(t_stack	**a, t_stack **b);

void					handle_3_args(t_stack **s);
void					handle_3_args_b(t_stack **s);
void					handle_till_6(t_stack **a, t_stack **b, int i);

void					duo_args(t_stack **s);

void					quicksort(t_stack **a, t_stack **b, int elem);
void					empty_b(t_stack **a, t_stack **b);
void					push_2_b(t_stack **a, t_stack **b, int p, int i);
void					sort_b(t_stack **a, t_stack **b, int p);
void					sort_half_b(t_stack **a, t_stack **b, int elem, int p);

int						hop(t_stack *head, t_stack *tail, int i);

void					print_swap_options\
							(t_stack **a, t_stack **b, t_options *o);
void					check_options(char **argv, t_options *o);
void					print_stack(t_stack **a, t_stack **b);

void					from_a_to_b(t_stack **a, t_stack **b, int elem, int p);
void					close_pos_a(t_stack **s, int p);
void					close_pos_b(t_stack **s, int p);
void					search_pos_b2(t_stack **s, int p);
void					search_pos_b(t_stack **s, int p);
void					search_pos_a2(t_stack **s, int p);
void					search_pos_a(t_stack **s, int p);

void					dom_sort(t_stack **a, t_stack **b);

int						in_or_out_loop(t_stack **s, int p);
#endif
