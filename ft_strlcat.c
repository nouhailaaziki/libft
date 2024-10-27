/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:42:27 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/24 11:16:41 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l;
	size_t	ld;
	size_t	ls;

	l = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	if (size <= ld)
		return (size + ls);
	else
	{
		while (src[l] && ld + l < size - 1)
		{
			dest[ld + l] = src[l];
			l++;
		}
		dest[ld + l] = '\0';
	}
	return (ld + ls);
}
/*
int main()
{
	char dest[6] = "aziki";
	const char src[6] = "nouha";
	printf("%zu\n", ft_strlcat(dest, src, 6));
	printf("%s\n", dest);
}*/
