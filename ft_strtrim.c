/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:11:04 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/03 10:32:38 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("nouhaila", "naziki"));
	printf("%s\n", ft_strtrim("nouhaila", "aziki"));
	printf("%s\n", ft_strtrim("nouhaila", "nouzi"));
	printf("%s\n", ft_strtrim("nouhaila", ""));
	printf("%s\n", ft_strtrim("", "noaziki"));
	printf("%s\n", ft_strtrim("", ""));
}*/
