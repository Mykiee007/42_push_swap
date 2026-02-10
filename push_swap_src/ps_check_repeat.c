/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_repeat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:13:59 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 11:18:06 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_repeat(t_ps_list *lst)
{
	t_ps_list		*cur;
	t_ps_list		*index;
	int				num;

	if (!lst)
		return (0);
	cur = lst;
	while (cur -> next != lst)
	{
		num = cur -> content;
		index = cur;
		while (index -> next != cur)
		{
			if (num == index -> next -> content)
			{
				ft_printf("Error\n");
				return (0);
			}
			index = index -> next;
		}
		cur = cur -> next;
	}
	return (1);
}
