/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:10:03 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/23 16:16:51 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
#include<string.h>
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}
/*
int main()
{
	char	str[20] = "esto es un test";
	char	str1[20] = "esto es un test 2";
	memset(str + 3, 5, 3);
	printf("%s\n", str);
	ft_memset(str1 + 3, 5, 3);
	printf("%s", str1);
	return (0);
}*/
