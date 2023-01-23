/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:57:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/19 20:08:14 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include<string.h>
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (dst < src)
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char dst[25] = "hey";
	char dst1[25] = "hey";
	char src[25] = "torre";
	char src1[25] = "torre";
	memmove(dst, src, 4);
	puts(dst);
	ft_memmove(dst1, src1, 4);
	puts(dst1);
	return (0);
}*/
