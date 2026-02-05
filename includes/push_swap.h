/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:12:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 15:55:14 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <fcntl.h>

typedef struct l_list
{
	int 			content;
	struct l_list	*next;
	struct l_list	*prev;
}	ps_list;


int		ps_check_ascend(ps_list *lst);
int		ps_check_integer_limits(char *str);
int		ps_check_integer(char **str);
int		ps_check_min(ps_list *lst);
int		ps_check_repeat (ps_list *lst);
void	ps_doublelst_add_back(ps_list **lst, ps_list *new);
void	ps_doublelst_add_front(ps_list **lst, ps_list *new);
ps_list	*ps_doublelst_new(int content);
void	ps_free_lst(ps_list **lst);
int		ps_index_of_min_rev(ps_list *lst);
int		ps_index_of_min_rot(ps_list *lst);
int		ps_index_of_min(ps_list *lst);
void	ps_print_lst(ps_list **lst);
void	ft_str_to_lst(char **input_list, ps_list **lst);
char	*ps_input_to_str(char **argv);
void	ps_doublelst_delhead(ps_list **lst);
void	ps_doublelst_clear(ps_list **lst);
void	ps_free_content(void *content);
void    ps_swap_sa(ps_list **lst_a);
void    ps_swap_sb(ps_list **lst_b);
void    ps_push_pa(ps_list **lst_a, ps_list **lst_b);
void    ps_push_pb(ps_list **lst_b, ps_list **lst_a);
int		main(int argc, char **argv);

#endif