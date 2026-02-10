/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:12:22 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 10:20:19 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap_sa(t_ps_list **lst_a)
{
	t_ps_list	*first;
	t_ps_list	*second;
	t_ps_list	*third;
	t_ps_list	*tail;

	if (!lst_a || !(*lst_a))
		return ;
	first = (*lst_a);
	second = (*lst_a)-> next;
	third = second -> next;
	tail = (*lst_a)-> prev;
	if (first -> next == first)
		return ;
	else if ((*lst_a) == second -> next)
		(*lst_a) = second;
	else
	{
		tail -> next = second;
		second -> prev = tail;
		second -> next = first;
		first -> prev = second;
		first -> next = third;
		third -> prev = first;
		(*lst_a) = second;
	}
	ft_printf("sa\n");
	global_count++;
}
