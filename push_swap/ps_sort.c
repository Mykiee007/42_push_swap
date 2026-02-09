/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/09 14:33:07 by mvelasqu         ###   ########.fr       */
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
	int	bit;
	int	max_bit;
	int	len_a;
	int	n;

	if (!lst_a || !(*lst_a))
		return ;
	bit = 0;
	len_a = ps_doublelst_count(lst_a);
	max_bit = get_max_bits((len_a -1));
	while (bit < max_bit)
	{
		n = len_a;
		while (n)
		{
			if (((*lst_a)-> key >> bit) & 1)
				ps_rotate_ra(lst_a);
			else
				ps_push_pb(lst_b, lst_a);
			n--;
		}
		while (*lst_b != NULL)
			ps_push_pa(lst_a, lst_b);
		bit++;
	}
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