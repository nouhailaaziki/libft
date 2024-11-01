/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:39:06 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/01 10:34:13 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*h;

	i = 0;
	h = (unsigned char *) b;
	while (i < len)
	{
		h[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
/*
int	main()
{
	unsigned char	str[] = "nouhaila";
	int	c = 445;
	size_t len = 5;
	ft_memset(str, c, len);
	printf("%s\n", str);
}*/
