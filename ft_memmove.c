/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:57:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/25 11:58:48 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len != 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		*d++ = s[i];
		i++;
	}
	return (dst);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	char dst[25] = "hey";
	char dst1[25] = "hey";
	char src[25] = "torre";
	char src1[25] = "torre";
	char overlap1[10] = "*qwert*";
	char overlap2[10] = "*qwert*";
	memmove(dst, src, 4);
	puts(dst);
	ft_memmove(dst1, src1, 4);
	puts(dst1);
	memmove(overlap1, overlap1 + 3, 4);
	ft_memmove(overlap2, overlap2 + 3, 4);
	puts(overlap1);
	puts(overlap2);
	return (0);
}*/
