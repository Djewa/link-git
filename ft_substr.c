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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		s_len;
	char				*str;
	char				*ptr;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	s += start;
	ptr = str;
	str[len] = '\0';
	while (len--)
	{
		*str++ = *s++;
	}
	return (ptr);
}

// int	main()
// {
// 	char const	*str = "Mozilla";
// 	printf("%s", ft_substr(str, 2, 7));
// }o