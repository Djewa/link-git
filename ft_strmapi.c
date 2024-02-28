/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:01:54 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/28 18:37:42 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// char	function_test(unsigned int i, char s)
// {
// 	printf("Function : %d and %c\n", i, s);
// 	return (0);
// }

// int	main()
// {
// 	char	str[] = "Peerapol";
// 	// printf("I am %s", str);
// 	char	*ret;
// 	ret = ft_strmapi(str, function_test);
// 	printf("%s\n", ret);
// }