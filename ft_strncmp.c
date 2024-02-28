/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:06:31 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 16:06:31 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i <= n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i > n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

// int	main()
// {
// 	char	s1[] = "abcdef";
// 	char	s2[] = "abcdd";
// 	unsigned int	n = 5;
// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }