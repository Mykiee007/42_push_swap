/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:34:54 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 10:39:18 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort(ps_list **lst_a, ps_list **lst_b)
{
	ps_push_pa(&lst_a, &lst_b);
	ps_push_pb(&lst_a, &lst_b);
	ps_swap_sa(&lst_a);
	ps_swap_sb(&lst_b);
	ps_rotate_ra(&lst_a);
	ps_rotate_ra(&lst_b);
	
}