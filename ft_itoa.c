/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:47:20 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/06 14:39:34 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count++;
		n = 2147483647;
	}
	else if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = counter(n);
	str = (char *)ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[--len] = '8';
			n = 214748364;
		}
		else
			n = -n;
	}
	while (len-- && str[len] != '-')
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(2147483647));
}*/
