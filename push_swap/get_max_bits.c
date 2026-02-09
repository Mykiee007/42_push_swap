/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:13:07 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/09 12:18:37 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(int max_key)
{
	int bits = 0;

	while (max_key > 0)
	{
		max_key = max_key >> 1;
		bits ++;
	}
	return (bits);
}