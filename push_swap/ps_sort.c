/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ps_push_pb(lst_a, lst_b);
//ps_swap_sa(lst_a);
//ps_swap_sb(lst_b);
//ps_rotate_ra(lst_a);
//ps_rotate_ra(lst_b);
#include "push_swap.h"

void	ps_sort(t_ps_list **lst_a, t_ps_list **lst_b)
{
	int		lst_count_a;
	int		lst_count_b;

	lst_count_a = ps_doublelst_count(lst_a);
	lst_count_b = ps_doublelst_count(lst_b);
	if (ps_check_ascend(*lst_a) && (!lst_b || !(*lst_b)))
		return ;
	while (lst_count_a > 3)
		ft_printf("many nodes, list B count: %d\n", lst_count_b);
	if (lst_count_a == 3)
		ps_sort_3digits(lst_a);
	return ;
}
