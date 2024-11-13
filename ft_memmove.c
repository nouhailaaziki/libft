/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <contact.naziki@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:34:31 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/10 10:14:55 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*str;

	if ((dst == NULL && src == NULL) || len == 0)
		return (dst);
	dest = (unsigned char *) dst;
	str = (unsigned char *)src;
	if (dest < str)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = str[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i--)
			dest[i] = str[i];
	}
	return (dst);
}
