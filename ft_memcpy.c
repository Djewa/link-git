/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:53:12 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:53:12 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// int main () 
// {
// 	char	src[50] = "Learningisfun";
// 	char	*dest;

// 	dest = src;
// 	printf("Before memcpy dest = %s\n", src);
// 	ft_memcpy(dest, src, strlen(src)+1);
// 	printf("After memcpy dest = %s\n", dest);

// 	ft_memcpy(dest +8, dest, 10);
// 	printf("After memcpy dest = %s\n", dest);
// 	return(0);
// }