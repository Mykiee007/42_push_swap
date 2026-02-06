/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_index_of_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:44:18 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_index_of_min(t_ps_list *lst)
{
	int	min_rot;
	int	min_rev;

	if (!lst)
		return (-1);
	min_rot = ps_index_of_min_rot(lst);
	min_rev = ps_index_of_min_rev(lst);
	if (min_rot < min_rev)
		return (min_rot);
	else
		return (-min_rev);
}
