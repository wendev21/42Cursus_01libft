/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:53:21 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/02 18:26:18 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;

	len_s = ft_strlen(s);
	if (len > len_s)
		len = len_s;
	if (start >= len_s)
		start = len_s;
	result = malloc((len + 1) * (sizeof(char)));
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
