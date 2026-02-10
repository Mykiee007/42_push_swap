/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_2digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:17:05 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 12:28:23 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_2digits(t_ps_list **lst_a)
{
	if (ps_check_ascend(*lst_a))
		return ;
	else
		ps_rotate_ra (lst_a);
}
