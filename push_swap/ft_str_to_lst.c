/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:31:25 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 15:36:44 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_str_to_lst(char **split, t_ps_list **lst)
{
	long long int	number;
	t_ps_list		*node;
	int				i;

	i = 0;
	while (split[i] != NULL)
	{
		number = ft_atoi(split[i]);
		node = ps_doublelst_new(number);
		if (!node)
		{
			ps_doublelst_clear(lst);
			return ;
		}
		ps_doublelst_add_back(lst, node);
		i++;
	}
}
