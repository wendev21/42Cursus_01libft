/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:36:27 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/25 18:28:22 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	cc;
	size_t	i;

	str = (char *)s;
	cc = (char)c;
	i = ft_strlen(s);
	while (i-- >= 0)
	{
		if (str[i] == cc)
			return (&str[i]);
	}
	return (NULL);
}
