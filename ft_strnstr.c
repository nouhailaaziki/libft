/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:14:40 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/26 15:17:38 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		z = 0;
		j = i;
		if (haystack[i] == needle[0])
		{
			while (needle[z] && haystack[j] == needle[z] && j < len)
			{
				j++;
				z++;
			}
			if (needle[z] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	printf("%s\n", ft_strnstr("nouhailaazikinaziki", "l", 7));
	printf("%s\n", strnstr("nouhailaazikinaziki", "l", 7));
}*/
