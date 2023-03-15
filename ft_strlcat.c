/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:31:45 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/27 17:49:49 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	i = 0;
	while ((i < dstsize - (len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	const char	*d = dst;
	const char	*s = src;
	size_t	n = size;
	size_t	dlen;
	Find the end dst adjust bytes left but dont go past end 
	while (n-- != 0  && *dst != '\0')
		dst++;
	dlen = dst - d;
	n = size - dlen;

	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n-- != 0)
			*dst++ = *src;
		src++;
	}
	*dst = '\0';
	return (dlen + (src - s));
}

int main()
{
	char s[] = "hallo";
	char d[] = "wie geths";
	printf("%zu\n", ft_strlcat(d, s, 5));
	printf("%zu", strlcat(d, s, 5));
	return (0);
}*/
