/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:57:43 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/30 15:20:46 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main()
{
	printf("%s\n", strchr("teste", 'e'));
	printf("%s\n", ft_strchr("teste", 'e'));
	printf("%s\n", strchr("teste", '\0'));
	printf("%s\n", ft_strchr("teste", '\0'));
}*/
