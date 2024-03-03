/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:54:20 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 17:54:20 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (i < n)
	{
		if (dest[i] != src[i])
		{
			return (dest[i] - src[i]);
		}
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char	str1[6] = "ABCDEF";
// 	char	str2[6] = "abcdef";
// 	int		ret;

// 	ret = ft_memcmp(str1, str2, 5);
// 	if (ret > 0) 
// 	{
// 		printf("str2 is less than str1");
// 	} 
// 	else if(ret < 0) 
// 	{
// 		printf("str1 is less than str2");
// 	} 
// 	else 
// 	{
// 		printf("str1 is equal to str2");
// 	}
// 	return (0);
// }