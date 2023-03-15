/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:53:21 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/15 17:29:40 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		start = ft_strlen(s);
	}
	len_s = strlen(s + start);
	if (len > len_s)
		len = len_s;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_substr("", 1, 1));
//    printf("%s", ft_substr("hola", 0, 5));
//	printf("%s", ft_substr("", 1, 1));
//	printf("%s", ft_substr("hola", -1, 0));
//	printf("%s", ft_substr("hola", 0, -1));
//	printf("%s", ft_substr("hola", -1, -1));
//	printf("%s", ft_substr("hola", 0, -1));
//	printf("%s", ft_substr("hola", 0, 0));
//	printf("%s", ft_substr("hola", 0, 1));

	return 0;
}*/
