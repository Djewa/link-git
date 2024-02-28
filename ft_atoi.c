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
		result = result * 10 + neg * (*str - '0');
		if (neg < 0)
			return (0);
		if (neg > 0)
			return (-1);
		str++;
	}
	return (result);
}

// int main()
// {
// 	char	*a = "  ---+--+123456ab567";

// 	printf("%d", ft_atoi(a));
// 	return (0);
// }
