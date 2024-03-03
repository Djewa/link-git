/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:23:32 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 15:23:32 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (0);
}

// int main()
// {
// 	int	len;
// 	const char	str[] = "Hello World";
// 	const char	c = 'o';
// 	char	*ret = strrchr(str, c);
// 	if (ret != NULL)
// 	{
// 		printf("Looking for %c\n", *ret);
// 		printf("Found at position %d\n", ret - str);
// 		printf("String after |%c| is - |%s|\n", c, ret);
// 	}
// 	else
// 	{
// 		printf("Not found");
// 	}
// 	return(0);
// }
