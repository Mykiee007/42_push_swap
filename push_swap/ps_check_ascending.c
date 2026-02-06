/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_ascending.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:24:15 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:36:13 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_ascend(t_ps_list *lst)
{
	t_ps_list		*cur;
	t_ps_list		*next;
	int				min;

	if (!lst)
		return (0);
	cur = lst;
	min = lst -> content;
	while (cur -> next != lst)
	{
		next = cur -> next;
		if (min > cur -> next -> content)
			return (0);
		cur = next;
		min = cur -> content;
	}
	return (1);
}
