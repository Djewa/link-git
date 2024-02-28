/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:51:37 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 14:51:37 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main()
// {
// 	int	alnum, alnum2, alnum3, alnum4;
// 	int a = '1';
// 	int b = 't';
// 	int c = 'R';
// 	int d = '^';

// 	alnum = ft_isalnum(a);
// 	alnum2 = ft_isalnum(b);
// 	alnum3 = ft_isalnum(c);
// 	alnum4 = ft_isalnum(d);
// 	printf("%d\n", alnum);
// 	printf("%d\n", alnum2);
// 	printf("%d\n", alnum3);
// 	printf("%d\n", alnum4);
// }
