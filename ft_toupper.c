/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:54:55 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 14:54:55 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int	main()
// {
// int alpha, alpha2, alpha3;
//     int a = 'E';
//     int b = 'a';
//     int c = '1';
//     alpha = ft_toupper(a);
//     alpha2 = ft_toupper(b);
//     alpha3 = ft_toupper(c);
//     printf("%c\n", alpha);
//     printf("%c\n", alpha2);
//     printf("%c\n", alpha3);
// }