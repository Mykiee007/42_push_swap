/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:13:07 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/10 12:31:02 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(int max_key)
{
	int	bits;

	bits = 0;
	while (max_key > 0)
	{
		max_key = max_key >> 1;
		bits ++;
	}
	return (bits);
}
