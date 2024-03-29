/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:06:41 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:06:41 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}

// int	main()
// {
// 	int	print;
// 	int	print2;
// 	int	a = 1;
// 	int	b = 100;

// 	print = ft_isprint(a);
// 	print2 = ft_isprint(b);
// 	printf("%d\n", print);
// 	printf("%d\n", print2);
// }