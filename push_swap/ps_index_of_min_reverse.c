/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_of_min_reverse.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:28:09 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:36:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_index_of_min_rev(t_ps_list *lst)
{
	t_ps_list		*cur;
	int				min;
	int				min_index;
	int				index;

	if (!lst)
		return (-1);
	cur = lst;
	min = lst->content;
	min_index = 0;
	index = 0;
	while (cur->prev != lst)
	{
		if (cur->content < min)
		{
			min = cur->content;
			min_index = index;
		}
		cur = cur->prev;
		index++;
	}
	if (cur->content < min)
		min_index = index;
	return (min_index);
}
