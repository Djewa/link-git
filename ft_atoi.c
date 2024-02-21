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

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13)) //can start with an arbitray amount of white space (isspace (3)- has 32 and 9-13
	{
		str++;
	}
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
		{
			neg = neg * -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0'; //str[i] - '0' converts the character at position i to a numeric digit.
		str++;
	}
	return (result * neg);
}

int main()
{
	char	*a = "  ---+--+123456ab567";

	printf("%d", ft_atoi(a));
	return (0);
}
