/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:15:25 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 11:59:18 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_swap_sb(t_ps_list **lst_b)
{
	t_ps_list	*first;
	t_ps_list	*second;
	t_ps_list	*third;
	t_ps_list	*tail;

	if (!lst_b || !(*lst_b))
		return ;
	first = (*lst_b);
	second = (*lst_b)-> next;
	third = second -> next;
	tail = (*lst_b)-> prev;
	if (first -> next == first)
		return ;
	else if ((*lst_b) == second -> next)
		(*lst_b) = second;
	else
	{
		tail -> next = second;
		second -> prev = tail;
		second -> next = first;
		first -> prev = second;
		first -> next = third;
		third -> prev = first;
		(*lst_b) = second;
	}
	ft_printf("sb\n");
	global_count++;
}
