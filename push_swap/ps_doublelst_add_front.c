/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_add_front.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:11:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:34:04 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_doublelst_add_front(t_ps_list **lst, t_ps_list *new)
{
	t_ps_list	*head;
	t_ps_list	*tail;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		new -> next = new;
		new -> prev = new;
		*lst = new;
		return ;
	}
	head = (*lst);
	tail = (*lst)-> prev;
	new -> next = head;
	new -> prev = tail;
	tail -> next = new;
	head -> prev = new;
	(*lst) = new;
}
