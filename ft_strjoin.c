/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:18:57 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 17:18:57 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1++;
		i++;
	}
	j = i;
	while (*s2 != '\0')
	{
		str[j] = *s2++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
// 	char	*prefix = "abc";
// 	char	*suffix = "defgh";
// 	printf("%s\n", ft_strjoin(prefix, suffix));
// 	return (0);
// }