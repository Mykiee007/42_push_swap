/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:12:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 14:20:54 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

//extern int global_count;

typedef struct s_ps_list
{
	int					content;
	int					key;
	struct s_ps_list	*next;
	struct s_ps_list	*prev;
}	t_ps_list;

int			ps_check_ascend(t_ps_list *lst);
void		ps_error(void);
int			ps_check_integer_limits(char *str);
int			ps_check_integer(char **str);
int			ps_check_min(t_ps_list *lst);
int			ps_check_repeat(t_ps_list *lst);
void		ps_doublelst_add_back(t_ps_list **lst, t_ps_list *new);
void		ps_doublelst_add_front(t_ps_list **lst, t_ps_list *new);
t_ps_list	*ps_doublelst_new(int content);
void		ps_free_lst(t_ps_list **lst);
int			ps_index_of_min_rev(t_ps_list *lst);
int			ps_index_of_min_rot(t_ps_list *lst);
int			ps_index_of_min(t_ps_list *lst);
void		ps_print_lst(t_ps_list **lst);
void		ft_str_to_lst(char **input_list, t_ps_list **lst);
char		*ps_input_to_str(char **argv);
void		ps_doublelst_delhead(t_ps_list **lst);
void		ps_doublelst_clear(t_ps_list **lst);
void		ps_free_content(void *content);
void		ps_swap_sa(t_ps_list **lst_a);
void		ps_swap_sb(t_ps_list **lst_b);
void		ps_push_pa(t_ps_list **lst_a, t_ps_list **lst_b);
void		ps_push_pb(t_ps_list **lst_b, t_ps_list **lst_a);
void		ps_rotate_ra(t_ps_list **lst_a);
void		ps_rotate_rb(t_ps_list **lst_b);
void		ps_reverse_rra(t_ps_list **lst_a);
void		ps_reverse_rrb(t_ps_list **lst_b);
int			ps_doublelst_count(t_ps_list **lst);
void		ps_sort(t_ps_list **lst_a, t_ps_list **lst_b);
void		ps_sort_radix(t_ps_list **lst_a, t_ps_list **lst_b);
void		ps_sort_3digits(t_ps_list **lst_a);
void		ps_sort_2digits(t_ps_list **lst_a);
void		ps_sort_4_5digits(t_ps_list **lst_a, t_ps_list **lst_b);
void		ps_min_to_b(t_ps_list **lst_a, t_ps_list **lst_b, int n);
int			get_max_bits(int max_key);
void		ps_input_key(t_ps_list **lst_a);
void		ps_print_key(t_ps_list **lst);
int			main(int argc, char **argv);

#endif