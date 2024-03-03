/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:32:47 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:32:47 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg = neg * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * neg);
}

// int main()
// {
// 	printf("%d\n", ft_atoi("   123"));
// 	printf("%d\n", ft_atoi("\t\v\n\r\f123"));
// 	printf("%d\n", ft_atoi("0"));
// 	printf("%d\n", ft_atoi("-1000043"));
// 	printf("%d\n", ft_atoi("1209"));
// 	printf("%d\n", ft_atoi("12/3"));
// 	printf("%d\n", ft_atoi("12;3"));
// 	printf("%d\n", ft_atoi("0 49"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("\t 10"));
// 	printf("%d\n", ft_atoi("8 58"));
// 	return (0);
// }
