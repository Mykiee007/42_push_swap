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

/*char	*ps_input_to_str(char **argv)
{
	char	*str;
	size_t	i;

	str = "";
	i = 1;
	while (argv[i] != NULL)
	{
		str = ft_strjoin_delimeter(str,argv[i],' ');
		if (!str)
		{
			free (str);
			return NULL;
		}
		i++;
	}
	return (str);
}*/

char	*ps_input_to_str(char **argv)
{
	size_t	i;
	char	*result;
	char	*tmp; // make a temporary location so you can free later


	if (!argv || !*argv)
		return NULL;
	result = ft_strdup("");
	i = 1;
	while (argv[i] != NULL)
	{
		tmp = ft_strjoin(result, argv[i]);
		free (result);
		result = tmp;
		if (argv[i + 1] != NULL)
		{
				tmp = ft_strjoin(result," ");
				free (result);
				result = tmp;
		}
		i++;
	}
	return (result);
}