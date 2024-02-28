/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:22:53 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:22:53 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c > 'Z' || c < 'A'))
	{
		return (0);
	}
	return (1);
}

// int	main()
// {
// 	int	alpha, alpha2, alpha3;
// 	int a = 'E';
// 	int b = 'a';
// 	int c = '1';

// 	alpha = ft_isalpha(a);
// 	alpha2 = ft_isalpha(b);
// 	alpha3 = ft_isalpha(c);
// 	printf("%d\n", alpha);
// 	printf("%d\n", alpha2);
// 	printf("%d\n", alpha3);
// }
