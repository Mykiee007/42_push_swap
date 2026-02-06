/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_3digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:22:36 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:50:40 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_3digits(t_ps_list **lst_a)
{
	int		a_a;
	int		a_b;
	int		a_c;

	if (!lst_a || !(*lst_a))
		return ;
	a_a = (*lst_a)-> content;
	a_b = (*lst_a)-> next -> content;
	a_c = (*lst_a)-> prev -> content;
	if ((a_a > a_b) && (a_b > a_c))
	{
		ps_swap_sa(lst_a);
		ps_rotate_ra(lst_a);
	}
	else if ((a_a > a_c) && (a_c > a_b))
		ps_reverse_rra(lst_a);
	else if ((a_a > a_c) && (a_b > a_a))
		ps_rotate_ra(lst_a);
	else if ((a_a > a_b) && (a_a < a_c))
		ps_swap_sa(lst_a);
	else if ((a_a < a_c) && (a_b > a_c))
	{
		ps_rotate_ra(lst_a);
		ps_swap_sa(lst_a);
	}
	return ;
}

//	2 1
//	3 2
//	1 3
//	
//	2 1
//	1 2
//	3 3
//	
//	3 2 1 done
//	2 3 2
//	1 1 3
//	
//	special
//	1 3 2 1
//	3 2 3 2
//	2 1 1 3
//
//	1 2 1
//	3 1 2
//	2 3 3
//
//	special
//	3 1 3 2 1
//	1 3 2 3 2
//	2 2 1 1 3
//
//	3 1
//	1 2
//	2 3