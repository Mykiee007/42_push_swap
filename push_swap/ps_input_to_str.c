/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:56:04 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 15:21:20 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that takes #s if arguments and joins them with a delimeter

#include "push_swap.h"

char	*ps_input_to_str(char **argv)
{
	char	*str;
	size_t	i;

	i = 2;
	str = argv[1];
	while (argv[i] != NULL)
	{
		str = ft_strjoin_delimeter(str,argv[i],' ');
		i++;
	}
	return (str);
}