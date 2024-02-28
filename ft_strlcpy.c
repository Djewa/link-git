/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:59:54 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 16:59:54 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
	{
		while (src[i] != '\0')
		{
			i++;
			return (i);
		}
	}
	while (src[i] != '\0' && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i + 1);
}

// int main()
// {
// 	char	src[100] = "My Name is Miin";
// 	char	dest[100] = "I am Miin";
// 	int	result;

// 	printf("src = %s\n", src);
// 	printf("dest = %s\n", dest);
// 	result = ft_strlcpy(dest, src, 16);
// 	printf("New dest = %s\n", dest);
// 	printf("Value = %d", result);
// }