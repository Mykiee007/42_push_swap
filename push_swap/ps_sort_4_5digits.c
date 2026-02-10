/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_4_5digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:23:21 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 10:02:04 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_4_5digits(t_ps_list **lst_a, t_ps_list **lst_b)
{
	int	count;

	count = ps_doublelst_count(lst_a);
	if (count > 3)
		ps_min_to_b(lst_a, lst_b, (count - 3));
	if (ps_check_ascend(*lst_a) && ps_check_ascend(*lst_b))
		return ;
	else if (!ps_check_ascend(*lst_a) && ps_check_ascend(*lst_b))
	{
		ps_sort_3digits(lst_a);
		ps_rotate_rb(lst_b);
	}
	else if (!ps_check_ascend(*lst_a) && !ps_check_ascend(*lst_b))
		ps_sort_3digits(lst_a);
	else if (ps_check_ascend(*lst_a) && ps_check_ascend(*lst_b))
		ps_rotate_rb(lst_b);
	while (*lst_b != NULL)
		ps_push_pa(lst_a, lst_b);
}

	/*algo
	count
	total - 3, how many pb will it do.
	do if for 6 and do if for 4-5
	check ascending list a check decending list b
	if both need:
		do 3digits sort to a, then rotate ra to list b
	if a need but b dont need
		do 3 digits 
	if a dont need, but b need
		rotate b
	if a need, and b need given b count is 6.
		3digits a, 3digits b
	if a need, b dont need and count is 6

	*/