/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_radix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:12:48 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 09:43:56 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_radix(t_ps_list **lst_a, t_ps_list **lst_b)
{
	int	bit;
	int	max_bit;
	int	len_a;
	int	n;

	// add if 1 node
	// add if two node
	// add if 3 node
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