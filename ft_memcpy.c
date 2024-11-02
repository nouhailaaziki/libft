/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:19:40 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/02 14:58:14 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*str;

	if (dst == NULL && src == NULL && n > 0)
		return (NULL);
	i = 0;
	str = (const unsigned char *) src;
	dest = (unsigned char *) dst;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
/*
int	main()
{
	unsigned char dest[] = "aziki";
	unsigned char str[] = "nouhaila aziki";
	size_t n = 8;
	printf("%s\n", ft_memcpy(dest, str, n));
	printf("%s", str);	
	printf("%s\n", memcpy(dest, str, n));
	printf("%s", str);
}*/
