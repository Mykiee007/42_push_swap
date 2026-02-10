/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rrb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:47:44 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 10:18:26 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_reverse_rrb(t_ps_list **lst_b)
{
	(*lst_b) = (*lst_b)-> prev;
	ft_printf("rrb\n");
	global_count++;
}
