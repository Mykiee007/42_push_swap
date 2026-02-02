/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_delimeter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:10:03 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 15:18:08 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memcpy_count(char *dest, char const *src, size_t *c)
{
	size_t i;

	i = 0;
	
	while (src[i] != '\0')
	{
		dest[*c] = src[i];
		i++;
		(*c)++;
	}
}

char	*ft_strjoin_delimeter(char const *s1, char const *s2, char d)
{
	char	*tmp;
	size_t	*i;
	size_t	c;
	size_t	total;

	c = 0;
	i = &c;
	if(!s2)
		return NULL;
	if (!s1)
		total = ft_strlen(s2) + 1;
	else
		total = ft_strlen(s1) + ft_strlen(s2) + 2;
	tmp = (char *)malloc (total * sizeof(char));
	if (!tmp)
		return NULL;
	if (s1 != NULL)
	{
		ft_memcpy_count(tmp, s1, i);
		tmp[c] = d;
		c = c + 1;
	}
	ft_memcpy_count(tmp, s2, i);
	tmp[c] = '\0';
	ft_printf("in delimeter: %s\n", tmp);
	return (tmp);
}