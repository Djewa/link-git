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
	i = 0;
	
	if(*dest == '\0' && *src == '\0')
	{
		return (NULL);
	}
	if (dest > src && dest - src < n)
	{
		while (n > 0)
		{
			dest[n] = src[n];
			n--;
		}
    }
	else
	{
		while(i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

#include <stdio.h>
#include <string.h> 
int main()
{
	char    src[100] = "Learningisfun";
	char    *dest;
	char    *d2;

	dest = src;
	d2 = src;

	printf("Original String = %s\n", src);

	ft_memmove(dest, src, strlen(src) + 1);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	
	ft_memmove(dest + 8, d2, 10);
	printf("str: %s\n", src);
	return(0);

}