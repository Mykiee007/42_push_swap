/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:09:19 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/09 13:22:45 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*ps_doublelst_new(int content)
{
	t_ps_list	*node;

	node = (t_ps_list *)malloc(sizeof(t_ps_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> key = -1;
	node -> next = NULL;
	node -> prev = NULL;
	return (node);
}
