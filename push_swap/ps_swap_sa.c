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

void    ps_swap_sa(ps_list **lst_a)
{
    ps_list *first;
    ps_list *second;
    ps_list *third;
    ps_list *tail;


    // handle list is NULL do nothing
    if (!lst_a || !(*lst_a))
        return;
    
    // handle if list has only 1 node
    first = (*lst_a);
    second = (*lst_a) -> next;
    third = second -> next;
    tail = (*lst_a) -> prev;
    if (first -> next == first)
        return;
    // if list has 2 nodes, switch head
    else if ((*lst_a) == second -> next)
        (*lst_a) = second;
    // if more than 2 nodes, 
    else
    {
        tail -> next = second;
        second -> prev = tail;
        second -> next = first;
        first -> prev = second;
        first -> next = third;
        third -> prev = first;
        (*lst_a) = second;
    }
    ft_printf("sa\n");
}
