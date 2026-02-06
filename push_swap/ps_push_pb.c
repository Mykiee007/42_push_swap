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

void    ps_push_pb(ps_list **lst_dest, ps_list **lst_src)
{
    ps_list *first_src;
    ps_list *second_src;
    ps_list *last_src;

    if (!lst_src || !*lst_src)
        return;
    //node 1 check
    first_src = (*lst_src);
    if ((*lst_src) -> next == (*lst_src))
    {
        ps_doublelst_add_front(lst_dest, first_src);
        (*lst_src) = NULL;
    }
    else
    {
        second_src = (*lst_src) -> next;
        last_src = (*lst_src) -> prev;
        second_src -> prev = last_src;
        last_src -> next = second_src;
        (*lst_src) = second_src;
        first_src -> next = NULL;
        first_src -> prev = NULL;
        ps_doublelst_add_front(lst_dest, first_src);
    }
    ft_printf("pb\n");
}
