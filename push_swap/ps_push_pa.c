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

void    ps_push_pa(ps_list **lst_a, ps_list **lst_b)
{
    int content;
    ps_list *node;

    if (!lst_a || !(*lst_a))
        return;
    content = (*lst_a) ->content;
    node = ps_doublelst_new(content);
    if (!node)
    {
        ps_doublelst_clear(lst_a);
        ps_doublelst_clear(lst_b);
        return;
    }
    ps_doublelst_add_front(lst_b, node);
    ps_doublelst_delhead(lst_a);
    ft_printf("pa\n");
}
