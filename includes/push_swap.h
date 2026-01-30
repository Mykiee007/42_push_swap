/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:12:29 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 16:47:43 by mvelasqu         ###   ########.fr       */
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
char	*ps_input_to_str(char **argv);
int		main(int argc, char **argv);

#endif