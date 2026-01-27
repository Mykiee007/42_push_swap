/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_of_min_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:26:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:34 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_index_of_min_rot(ps_list *lst)
{
    ps_list *cur;
    int min;
    int min_index = 0;
    int index = 0;

    if (!lst)
        return (-1);
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