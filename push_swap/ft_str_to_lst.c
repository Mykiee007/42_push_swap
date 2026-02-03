/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:31:25 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/03 15:09:21 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_str_to_lst(char **split, ps_list **lst)
{
	int	i;
	long long int	number;
	ps_list *node;

	// separate the function - done
	// validate the input_list properly. handle invalid
	// clean up if in case failed in the middle of the transfering
	// handle when pointer is null?
	// check if we really want an integer or a string of numbers. 

	i = 0;
	while (split[i] != NULL)
	{
		number = ft_atoi(split[i]);  
		node = ps_doublelst_new(number);
		if (!node)
			return;
		ps_doublelst_add_back(lst,node);
		i++;
	}
}