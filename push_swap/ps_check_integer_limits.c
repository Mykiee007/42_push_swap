/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_integer_limits.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 12:12:11 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/03 16:11:46 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_integer_limits(char *str)
{
	long long int	tmp;
	int				i;
	int				sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	tmp = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		tmp = (tmp * 10) + (str[i] - '0');
		tmp = tmp * sign;
		if (INT_MIN > tmp || tmp > INT_MAX)
			return 0;
		i++;
	}
	if (str[i] != '\0')
		return 0;
	return 1;
}