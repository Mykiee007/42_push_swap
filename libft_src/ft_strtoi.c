/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:40:35 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/03 16:10:31 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	*ft_strtoi(char *str)
{
	long long int		*ptr;
	int		i;
	int		sign;
	long long int		result;

	if (!str)
		return NULL;
	ptr = malloc(sizeof(long long int));
	if (!ptr)
		return NULL;
	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] == 0)
	{
		free (ptr);
		return NULL;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		if ((result * sign) < INT_MIN || (result * sign) > INT_MAX)
		{
			free (ptr);
			return NULL;
		}
		i++;
	}
	ft_printf("inside ft_strtoi: %d\n", result);
	*ptr = (result*sign);
	return (ptr);
}