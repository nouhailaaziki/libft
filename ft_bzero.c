/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:06:16 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/26 15:05:09 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int main()
{
	char str[15] = "nouhaila aziki";
	ft_bzero(str, 9);  
	printf("%s\n", str);  
	return 0;
}*/
