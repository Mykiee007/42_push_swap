/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 14:03:37 by mvelasqu         ###   ########.fr       */
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
	int	count;

	if (!lst_a || !(*lst_a))
		return ;
	count = ps_doublelst_count(lst_a);
	if (count == 1 || ps_check_ascend(*lst_a))
		return ;
	if (count == 2)
		ps_sort_2digits(lst_a);
	if (count == 3)
		ps_sort_3digits(lst_a);
	if (count >= 4 && count <= 5)
		ps_sort_4_5digits(lst_a, lst_b);
	if (count > 5)
		ps_sort_radix(lst_a, lst_b);
}

/*
Algorithim using bits

void ps_sort(t_ps_list **a, t_ps_list **b)
{
	t_ps_list	*cur;
	int		bit;
	int		k;
	int		len_a;

	if (!a || !(*a))
		return;
	cur = (*a);
	b = 0;
	k = cur -> key;
	

	while (what is this!!>?!?)
	{
		len_a = ps_count_lst(a);
		while (len_a)
		{
			if (((*a) -> k >> bit) & 1)
				ra(a);
			else
				pb(a, b);
			cur = cur -> next;
			len_a--;
		}
		while (*b != NULL)
			pa(b,a);
		bit++;
	}
}
*/