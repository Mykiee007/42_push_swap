/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:45:20 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_reverse_rra(t_ps_list **lst_a)
{
	(*lst_a) = (*lst_a)-> next;
	ft_printf("rra\n");
}
