/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat <djewapat@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:21:36 by djewapat          #+#    #+#             */
/*   Updated: 2024/02/21 18:21:36 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
	{
		return (0);
	}
	return (1);
}

int	main()
{
	int	ascii, ascii2;
	int	a = 120;
	int	b = 128;

	ascii = ft_isascii(a);
	ascii2 = ft_isascii(b);
	printf("%d\n", ascii);
	printf("%d\n", ascii2);
}
