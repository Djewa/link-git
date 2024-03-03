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

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	j = dest_len;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] != '\0' && i < size - dest_len - 1)
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

// #include <stdio.h>
// int main()
// {
// 	char	dest[100] = "My Name is Miin";
// 	char	src[] = " Nice to meet You";

// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);
// 	unsigned int	result = ft_strlcat(dest, src, 13);
// 	printf("New dest = %s\n", dest);
// 	printf("Value = %d", result);
// }