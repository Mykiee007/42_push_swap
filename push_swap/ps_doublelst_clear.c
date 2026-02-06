/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_doublelst_clear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:33 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:32:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_doublelst_clear(t_ps_list **lst)
{
	if (!lst || !(*lst))
		return ;
	while ((*lst) != NULL)
		ps_doublelst_delhead(lst);
}

// i check first if list and head pointer is not null
// delete all until *lst (head pointer is NULL)