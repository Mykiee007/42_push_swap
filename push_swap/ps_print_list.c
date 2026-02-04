/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:12:22 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/04 16:25:17 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_print_lst(ps_list **lst)
{
	ps_list *list;
	if (!lst || !*lst)
	{
		ft_printf("empty list\n");
		return;
	}
	list = *lst;
	while (list -> next != *lst)
	{
		ft_printf("%d", list -> content);
		if (list -> next != *lst)
			ft_printf(" ");
		list = list -> next;
	}
	ft_printf("%d\n", list -> content);
}