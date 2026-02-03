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
#include <stdio.h>

int	ps_check_integer_limits(char *string)
{
	long long int		*ptr;

	ptr = ft_strtoi(string);
	if (!ptr)
	{
		free (ptr);
		return 0;
	}
	free (ptr);
	return 1;
}