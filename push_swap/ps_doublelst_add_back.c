/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_add_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:11:01 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_doublelst_add_back(t_ps_list **lst, t_ps_list *new)
{
	t_ps_list	*tail;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		new -> next = new;
		new -> prev = new;
		*lst = new;
		return ;
	}
	tail = (*lst)-> prev;
	new -> next = *lst;
	new -> prev = tail;
	tail -> next = new;
	(*lst)-> prev = new;
}
