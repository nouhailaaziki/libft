/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <contact.naziki@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:27:29 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/10 10:14:34 by noaziki          ###   ########.fr       */
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
