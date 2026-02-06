/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rrb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:47:44 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 11:49:20 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ps_reverse_rrb(ps_list **lst_b)
{
    (*lst_b) = (*lst_b) -> next;
    ft_printf("rrb\n");
}