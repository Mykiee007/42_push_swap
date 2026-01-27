/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_of_min_reverse.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:28:09 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:30 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_index_of_min_rev(ps_list *lst)
{
    ps_list *cur;
    int min;
    int min_index = 0;
    int index = 0;

    if (!lst)
        return (-1);
    cur = lst;
    min = lst->content;
    while (cur->prev != lst)
    {
        if (cur->content < min)
        {
            min = cur->content;
            min_index = index;
        }
        cur = cur->prev;
        index++;
    }
    if (cur->content < min)
        min_index = index;

    return (min_index);
}