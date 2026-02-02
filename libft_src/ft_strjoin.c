/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:18:21 by mvelasqu          #+#    #+#             */
/*   Updated: 2026/01/29 13:54:32 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	d = (char *)malloc(len * sizeof(char));
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, len);
	ft_strlcat(d, s2, len);
	return (d);
}

/*int	main(void)
{
	char arr1[] = "Hello";
	char arr2[] = "World";
	char *str;
	str = ft_strjoin(arr1,arr2);
	printf("%s\n", str);
	return (0);
}*/
