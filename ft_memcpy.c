/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:19:00 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/24 20:07:17 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include<string.h>
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	unsigned char src[25];
	unsigned char src1[28];
	char dest[20];
	char dest1[20];
	ft_memcpy(dest1, src1, 3);
	printf("%s", dest1);
	memcpy(dest, src, 3);
	printf("%s", dest);
	return (0);
}*/
