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

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		len_s;
	int		i;

	i = 0;
	len_s = = ft_strlen(s);
	if(start >= len_s)
	{
		ft_strchr(s, start);
	}
	else
	{
		ft_strrchr(s, len_s);
	}
	substr = (char *)malloc((len_s + 1) * sizeof(char));
	while (i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}



while (len + start < len_s || len > len_s)
	{

	}


		if (substr == '\0')
	{
		return (0);
	}