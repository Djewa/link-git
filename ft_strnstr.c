/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:49:07 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 15:49:07 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
		return ((char *)(str + i));
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == find[j] && (i + j) < len)
		{
			if (find[j + 1] == '\0')
			{
				return ((char *)(str + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	a[] = "Hello Wolrd";
// 	char	b[] = "Wolrd";
// 	int	c = 20;
// 	int	d = 10;
// 	printf("%s\n", ft_strnstr(a, b, c));
// 	printf("%s", ft_strnstr(a, b, d));
// }