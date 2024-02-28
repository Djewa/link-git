/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:10:54 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 15:10:54 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

// int	main()
// {
// 	int	low, low1, low2;
// 	int	a, b, c;
// 	a = 'A';
// 	b = 'a';
// 	c = '1';
// 	low = ft_tolower(a);
// 	low1 = ft_tolower(b);
// 	low2 = ft_tolower(c);
// 	printf("%c\n", low);
// 	printf("%c\n", low1);
// 	printf("%c\n", low2);
// }