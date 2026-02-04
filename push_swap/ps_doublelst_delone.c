/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:33 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/02 10:04:10 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_doubelst_delone(ps_list **lst)
{
    ps_list     *list;

    if (*lst == NULL)
        return;
    list = *lst;
    if (list -> next == *lst && list -> previous == *lst)
    {
        free (*lst);
        *lst = NULL;
        return;
    }
    list -> next -> previous = list -> previous;
    list -> previous -> next = list -> next;
    *lst = list -> next;
    free (list);
    return;
}