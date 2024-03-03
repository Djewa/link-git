/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djewapat < djewapat@student.42bangkok.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:04:06 by djewapat          #+#    #+#             */
/*   Updated: 2024/03/03 16:26:00 by djewapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countnumber(int i, int count)
{
	if (i == -2147483648)
		count = 11;
	if (i == 0)
		count++;
	while (i > 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	i;
	int			count;

	i = n;
	count = 0;
	if (i < 0)
	{
		count++;
		i *= -1;
	}
	count = countnumber(i, count);
	str = (char *)malloc((count +1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	while (count > 0)
	{
		str[count - 1] = (i % 10) + '0';
		i /= 10;
		count--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main()
// {
// 	int a = 12345;
// 	printf("%s", ft_itoa(a));
// }