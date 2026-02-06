/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_input_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:56:04 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/02/06 14:33:28 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that takes #s if arguments and joins them with a delimeter

#include "push_swap.h"

char	*ps_input_to_str(char **argv)
{
	size_t	i;
	char	*result;
	char	*tmp;

	if (!argv || !*argv)
		return (NULL);
	result = ft_strdup("");
	i = 1;
	while (argv[i] != NULL)
	{
		tmp = ft_strjoin(result, argv[i]);
		free (result);
		result = tmp;
		if (argv[i + 1] != NULL)
		{
			tmp = ft_strjoin(result, " ");
			free (result);
			result = tmp;
		}
		i++;
	}
	return (result);
}
