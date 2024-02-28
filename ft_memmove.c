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

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)s1;
	src = (char *)s2;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			dest[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char    src[100] = "Learningisfun";
// 	char    *dest;
// 	char    *d2;

// 	dest = src;
// 	d2 = src;

// 	printf("Original String = %s\n", src);

// 	ft_memmove(dest, src, strlen(src) + 1);
// 	printf("After memmove dest = %s, src = %s\n", dest, src);

// 	ft_memmove(dest + 8, d2, 10);
// 	printf("str: %s\n", src);
// 	return(0);
// }