/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_count.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:44:06 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:37:08 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_doublelst_count(t_ps_list **lst)
{
	t_ps_list	*cur;
	int			count;

	if (!lst || !(*lst))
		return (0);
	cur = (*lst);
	count = 1;
	while (cur -> next != (*lst))
	{
		count++;
		cur = cur -> next;
	}
	return (count);
}
