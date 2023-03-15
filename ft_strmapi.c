/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:50:08 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/06 22:58:48 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*nws;

	if (!s || !f)
		return (NULL);
	len_s = (ft_strlen(s));
	nws = ft_calloc(sizeof(char), (len_s + 1));
	if (!nws)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		nws[i] = f(i, s[i]);
		++i;
	}
	return (nws);
}
//#include <stdio.h>
