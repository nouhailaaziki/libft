/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <contact.naziki@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:42:27 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/10 10:15:44 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
