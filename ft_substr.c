/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:48:16 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/02 10:49:02 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	lens;
	char	*p;

	a = start + len;
	i = 0;
	lens = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= lens)
		return (ft_calloc(1, 1));
	if (len > lens - start)
		len = lens - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (start < a && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main()
{
	printf("%s\n", ft_substr("nouhailaaziki", 6,  5));
	printf("%s\n", ft_substr("", 1,  1));
	printf("%s\n", ft_substr("aziki", 6, 2));
	printf("%s\n", ft_substr("noaziki", 4, 10));
}*/