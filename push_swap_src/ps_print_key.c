/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_key.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:16:07 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/09 14:18:57 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_print_key(t_ps_list **lst)
{
	t_ps_list	*list;

	if (!lst || !*lst)
	{
		ft_printf("empty list\n");
		return ;
	}
	list = *lst;
	while (list -> next != *lst)
	{
		ft_printf("%d", list -> key);
		if (list -> next != *lst)
			ft_printf(" ");
		list = list -> next;
	}
	ft_printf("%d\n", list -> key);
}