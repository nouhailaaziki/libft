/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:06:11 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/30 13:41:19 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{	char str1[] = "abcdef";
	char str2[] = "abc\375xx";
	printf("%d\n", ft_strncmp("abcdef", "abc\375xx", 5));
	printf("%d\n", strncmp(str1, str2, 5));
//	printf("%d", strncmp(str1, str2, 4));
}*/
