/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:56:13 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:33:59 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_free_lst(t_ps_list **lst)
{
	t_ps_list	*cur;
	t_ps_list	*next;

	if (!lst || !*lst)
		return ;
	cur = (*lst)->next;
	while (cur != *lst)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	free(*lst);
}
