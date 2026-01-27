/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_free_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:56:13 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/27 14:59:26 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_free_lst(ps_list **lst)
{
    ps_list *cur;
    ps_list *next;

    if (!lst || !*lst)
        return;
    cur = (*lst)->next;
    while (cur != *lst)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    free(*lst);
}