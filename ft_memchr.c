/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:57:21 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 17:57:21 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}

// int	main () 
// {
// 	const char	str[] = "Hello World";
// 	const char	ch = 'W';
// 	char		*ret;

// 	ret = ft_memchr(str, ch, ft_strlen(str));
// 	//printf("String after |%c| is - |%s|\n", ch, ret);

// 	ret = ft_memchr(str, ch, 6);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return(0);
// }