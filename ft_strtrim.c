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

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = (char *) s1;
	while (*str && ft_strchr(set, *str))
		str++;
	end = ft_strlen(str);
	while (end && ft_strchr(set, *(str + end - 1)))
		end--;
	return (ft_substr(str, 0, end));
}

// #include <stdio.h>

// int	main(void)s
// {
// 	char	str[100] = "*|peerapol**m///''jsdin|**|";
// 	char	set[20] = "*|";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
