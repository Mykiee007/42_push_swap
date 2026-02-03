/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:50:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/03 13:49:38 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_check_integer(char **str)
{
	int		i;
	int		j;

	// check for structure. what if 2+0 :))
	// check for positioning, + - only in front nothing else
	// check for limit. use INT_MIN and INT_MAX for this. 
	if (!str || !str)
		return 0;
	i = 0;
	while (str[i] != NULL)
	{
		j = 0;
		if (str[i][j] == '+' || str[i][j] == '-')
			j++;
		if (str[i][j] == '0')
			return 0;
		while((str[i][j]) != '\0')
		{
			if (!ft_isdigit(str[i][j]))
				return 0;
			j++;
		}
		if (!ps_check_integer_limits(str[i]))
			return 0;
		i++;
	}		
	return 1;
}