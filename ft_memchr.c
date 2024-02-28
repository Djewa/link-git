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

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	if (str[i] == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((void *)str + i);
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