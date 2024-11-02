/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:27:29 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/02 10:51:12 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	x;

	i = 0;
	str = (unsigned char *) s;
	x = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	unsigned char str[] = "nouhaila";
	unsigned char c = 'z';
	size_t n = 5;
	printf("%s", ft_memchr(str, c, n));
}*/
