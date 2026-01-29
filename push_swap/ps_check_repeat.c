/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_repeat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:13:59 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 13:59:59 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_check_repeat (ps_list *lst)
{
	ps_list *cur;
	ps_list *index;
	int num;

	if (!lst)
		return 0;
	cur = lst;
	while (cur -> next != lst)
	{
		num = cur -> content;
		index = cur;
		while (index -> next != cur)
		{
			if (num == index -> next -> content)
				return 0;
			index = index -> next;
		}
		cur = cur -> next; 
	}
	return 1;
}