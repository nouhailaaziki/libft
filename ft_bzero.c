/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:06:16 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/02 10:52:04 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
