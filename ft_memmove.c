/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:34:31 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/27 15:54:37 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*str;

	dest = (unsigned char *) dst;
	str = (unsigned char *)src;
	if (dest == NULL || str == NULL)
		return (NULL);
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
/*
int	main()
{
	unsigned char dst[] = "nouhaila aziki";
	const unsigned char str[] = "nouhaila aziki";
	size_t n = 5;
	ft_memmove(dst, str, n);
	printf("%s\n", dst);
	memmove(dst, str, n);
	printf("%s", dst);
}*/
