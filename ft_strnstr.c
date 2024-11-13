/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <contact.naziki@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:14:40 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/10 10:16:47 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
