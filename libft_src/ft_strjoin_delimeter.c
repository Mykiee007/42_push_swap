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

static int	ft_memcpy_count(char *dest, char const *src, int c)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	return (c);
}

char	*ft_strjoin_delimeter(char const *s1, char const *s2, char d)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	int		i;

	if(!s1 || !s2 || !d)
		return NULL;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2) + 1;
	str = (char *)malloc ((len1 + len2 + 1)*sizeof(char));
	if (!str)
		return NULL;
	i = 0;
	i = ft_memcpy_count(str, s1, i);
	str[i] = d;
	i = i + 1;
	i = ft_memcpy_count(str, s2, i);
	str[i] = '\0';
	return (str);
}