/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_add_front.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:11:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:23 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_doublelst_add_front(ps_list **lst, ps_list *new)
{
	ps_list *tail;
	
	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		new -> next = new;
		new -> prev = new;
		*lst = new;
		return;
	}
	tail = (*lst) -> prev;
	tail -> next = new;
	new -> prev = tail;
	new -> next = *lst;
	(*lst) -> prev = new;
}