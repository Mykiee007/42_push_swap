/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 10:50:51 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 11:18:07 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_integer(char **str)
{
	int	i;

	if (!str || !str)
		return (0);
	i = 0;
	while (str[i] != NULL)
	{
		if (!ps_check_integer_limits(str[i]))
		{
			ft_printf("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
