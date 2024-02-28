/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:11:57 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 19:11:57 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (*dest == '\0' && *src == '\0')
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
		{
			dest[n] = src[n];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i++ < n)
		{
			dest[i] = src[i];
		}
	}
}

// int main()
// {
// 	char    src[20] = "Learningisfun";
// 	char    *dest;
// 	char    *d2;
// 	dest = src;

// 	ft_memmove(dest + 8, dest, 10);
// 	printf("str: %s\n", dest);
// 	return(0);
// }