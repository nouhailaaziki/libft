/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:51:18 by noaziki           #+#    #+#             */
/*   Updated: 2024/10/26 15:18:39 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# difine LIBFT_H

int     ft_toupper(int c)
int     ft_tolower(int c)
int     ft_isprint(int c)
int     ft_isdigit(int c)
int     ft_isascii(int c)
int     ft_isalpha(int c)
int     ft_isalnum(int c)
int     ft_atoi(const char *str)
int     ft_strncmp(const char *s1, const char *s2, size_t n)
size_t	ft_strlen(const char *s)
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
size_t	ft_strlcat(char *dest, const char *src, size_t size)
char	*ft_strchr(const char *s, int c)
char	*ft_strrchr(const char *s, int c)
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

#endif
