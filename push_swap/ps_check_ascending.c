/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_ascending.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:24:15 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:56:57 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_ascend(ps_list *lst)
{
	ps_list *cur;
	ps_list *next;
	int min;

	if (!lst)
		return 0;
	cur = lst;
	min = lst -> content;
	while (cur -> next != lst)
	{
		next = cur -> next;
		//ft_printf("\nnext: %d\n", min);
		//ft_printf("current: %d\n", cur -> next -> content);
		if (min > cur -> next -> content)
			return 0;
		cur = next;
		min = cur -> content;
	}
	return 1;
}