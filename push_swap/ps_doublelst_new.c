/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doubelst_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:09:19 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:17 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ps_list	*ps_doublelst_new(int content)
{
	ps_list	*node = (ps_list *)malloc(sizeof(ps_list));
	
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	node -> prev = NULL;
	return (node);
}