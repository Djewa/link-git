/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:20:36 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 15:20:36 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s1) - 1;
	if (*s1 == '\0')
		return (NULL);
	if (*set == '\0')
		return (s1);
	end = len;
	while (s1[start++] == *set)
	{
		return (start);
	}
	while (s1[end++] == *set)
	{
		return (end);
	}
	str = (char *)malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char	a[] = "abcdaba";
// 	char	b[] = "ab";
// 	printf("%s\n",ft_strtrim, a, b);
// }