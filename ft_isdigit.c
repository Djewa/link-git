/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:18:52 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:18:52 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int	main()
// {
// 	int digit, digit2, digit3;
// 	int a = '1';
// 	int b = 'a';
// 	int c = 'A';

// 	digit = ft_isdigit(a);
// 	digit2 = ft_isdigit(b);
// 	digit3 = ft_isdigit(c);
// 	printf("%d\n", digit);
// 	printf("%d\n", digit2);
// 	printf("%d\n", digit3);
// }