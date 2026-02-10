/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_of_min_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:26:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:36:23 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_index_of_min_rot(t_ps_list *lst)
{
	int			min;
	int			min_index;
	int			index;
	t_ps_list	*cur;

	if (!lst)
		return (-1);
	min_index = 0;
	index = 0;
	cur = lst;
	min = lst->content;
	while (cur->next != lst)
	{
		if (cur->content < min)
		{
			min = cur->content;
			min_index = index;
		}
		cur = cur->next;
		index++;
	}
	if (cur->content < min)
		min_index = index;
	return (min_index);
}
