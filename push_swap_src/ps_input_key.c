/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_key.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:40:04 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 12:33:17 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_input_key(t_ps_list **lst_a)
{
	t_ps_list		*cur;
	t_ps_list		*min;
	t_ps_list		*start;
	int				k;

	k = 0;
	while (k < ps_doublelst_count(lst_a))
	{
		cur = (*lst_a);
		while (cur-> key != -1)
			cur = cur -> next;
		start = cur;
		min = cur;
		while (cur-> next != start)
		{
			if (cur-> key == -1 && (cur-> content < min-> content))
				min = cur;
			cur = cur-> next;
		}
		if (cur-> key == -1 && (cur-> content < min-> content))
			min = cur;
		min -> key = k;
		k++;
	}
}

/* Algrithm

guard rail (!lst_a || !(lst_a))
ps_count_len (lst_a);
while (len_a > 0)
	while (min -> content >= cur - content && min -> key == -1)
	{
		min = cur;
		min -> key = key;
		cur = cur -> next;
	}	
	k++;
	len_a--;
}
*/