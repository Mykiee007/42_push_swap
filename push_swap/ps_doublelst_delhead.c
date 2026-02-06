/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_delhead.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:33 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_doublelst_delhead(t_ps_list **lst)
{
	t_ps_list	*cur;
	t_ps_list	*prev_l;

	if (!lst || !*lst)
		return ;
	cur = *lst;
	prev_l = NULL;
	if (cur -> next == *lst && cur -> prev == *lst)
	{
		free (cur);
		*lst = NULL;
		return ;
	}
	prev_l = (*lst)-> prev;
	*lst = (*lst)-> next;
	prev_l -> next = (*lst);
	(*lst)-> prev = prev_l;
	free(cur);
	return ;
}

// this delone moves the head to the next and delete the current head 
//of the linked list. 
	// 1. check if list is empty or del function is missing
	// 2. different way if node is only one and node is many
		// 2.a only one node inside, check if its the only node in the list
		// 2.b the list is many
	// check if i am at the head
	// start connecting pointers last (prev_l) and next (cur -> next)
	// get pointer of last node
	// move head pointer to next node.
	// update last pointer's next
	// update new headd pointer's prev;