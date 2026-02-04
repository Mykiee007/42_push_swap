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

void ps_doubelst_clear(ps_list **lst)
{
    ps_list *list;
    ps_list *tmp;
    
    if (!lst || !*lst)
        return;
    list = *lst;
    while (list -> next != *lst)
    {
        list = list -> next -> next;
        ps_doublelst_delone (lst);
    }
    ps_doublelst_delone(lst);
    return;
}