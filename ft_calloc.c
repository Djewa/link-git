/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:25:09 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:25:09 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	int		*numbers = ft_calloc(5, sizeof(int));
// 	char	*buffer = ft_calloc(10, sizeof(char));
// 	int		*empty_array = ft_calloc(0, sizeof(int));
// }