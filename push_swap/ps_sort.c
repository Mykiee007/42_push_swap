/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 11:05:43 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//ps_push_pa(lst_a, lst_b);
//ps_push_pb(lst_a, lst_b);
//ps_swap_sa(lst_a);
//ps_swap_sb(lst_b);
//ps_rotate_ra(lst_a);
//ps_rotate_ra(lst_b);
void	ps_sort(ps_list **lst_a, ps_list **lst_b)
{
	int		lst_count_a;
	int		lst_count_b;
	
	ps_push_pb(lst_a, lst_b);
	ps_push_pb(lst_a, lst_b);
	ps_push_pb(lst_a, lst_b);
	lst_count_a = ps_doublelst_count(lst_a);
	lst_count_b = ps_doublelst_count(lst_b);
	ft_printf("length of link list a: %d\n", lst_count_a);
	ft_printf("length of link list a: %d\n", lst_count_b);
}