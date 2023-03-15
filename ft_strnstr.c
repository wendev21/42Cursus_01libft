/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:35:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/01 14:39:09 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	char	*hay;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	hay = (char *)haystack;
	while (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] && needle[c]
			&& hay[i + c] == needle[c] && (i + c) < len)
			c++;
		if (c == n_len)
			return (&hay[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include<string.h>
int main ()
{
	const char	*hays;
	const char	*needl;

	hays = "this my string";
	needl = "this";
	printf("%s\n", strnstr(hays, needl, 15));	
	printf("%s", ft_strnstr(hays, needl, 15));
	return (0);
}*/
