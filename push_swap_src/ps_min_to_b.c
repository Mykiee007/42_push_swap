/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_min_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:46:33 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 12:28:39 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ps_min_to_b_rot(t_ps_list **lst_a, t_ps_list **lst_b, int i)
{
	while (i)
	{
		ps_rotate_ra(lst_a);
		i--;
	}
	ps_push_pb(lst_b, lst_a);
}

static void	ps_min_to_b_rev(t_ps_list **lst_a, t_ps_list **lst_b, int i)
{
	while (i)
	{
		ps_reverse_rra(lst_a);
		i++;
	}
	ps_push_pb(lst_b, lst_a);
}

void	ps_min_to_b(t_ps_list **lst_a, t_ps_list **lst_b, int n)
{
	int	i;

	while (n > 0)
	{
		i = ps_index_of_min(*lst_a);
		if (i > 0)
			ps_min_to_b_rot(lst_a, lst_b, i);
		else if (i < 0)
			ps_min_to_b_rev(lst_a, lst_b, i);
		else
			ps_push_pb(lst_b, lst_a);
		n--;
	}
}
