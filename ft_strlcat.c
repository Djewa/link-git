/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:02:59 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 17:02:59 by djewapat         ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t destsize) 
{
	unsigned int	i;
	unsigned int	j;
	int				dest_len;
	int				result;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0' && j < destsize - dest_len - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i+j);
}

int main()
{
	char	dest[100] = "My Name is Miin";
	char	src[] = " Nice to meet You";

	printf("dest = %s\n", dest);
	printf("src = %s\n", src);
	unsigned int	result = ft_strlcat(dest, src, 33);
	printf("New dest = %s\n", dest);
	printf("Value = %d", result);
}