/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_min.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:35:34 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:56 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_min(ps_list *lst)
{
	ps_list	*cur;
	int		min;

	min = lst -> content;
	cur = lst;
	while (cur -> next != lst)
	{
		if (cur -> content < min)
			return 0;
		cur = cur -> next;
	}
	return (1);
}