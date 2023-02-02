/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:53:21 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/02 12:56:39 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*result;
	size_t	start_s;

	result = 0;
	start_s = (size_t)start;
	len_s = ft_strlen(s);

	return (result);
}
#include <stdio.h>
int main()
{
	printf("%s", ft_substr("", 0, 0));
	printf("%s", ft_substr("", 0, 1));
	printf("%s", ft_substr("", 1, 1));
	printf("%s", ft_substr("hola", -1, 0));
	printf("%s", ft_substr("hola", 0, -1));
	printf("%s", ft_substr("hola", -1, -1));
	printf("%s", ft_substr("hola", 0, -1));
	printf("%s", ft_substr("hola", 0, 0));
	printf("%s", ft_substr("hola", 0, 1));

	return 0;
}
