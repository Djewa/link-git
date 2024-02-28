/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:17:44 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 15:17:44 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		len_s;
	int		end;
	int		i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start < 0)
		start = 0;
	end = len_s - start;
	if (end > len)
		end = len;
	substr = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < end)
	{
		substr[i++] = s[start++];
	}
	substr[start] = '\0';
	return (substr);
}

// int	main()
// {
// 	char const	*str = "Mozilla";
// 	printf("%s", ft_substr(str, 2, 7));
// }