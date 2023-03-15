/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:32:39 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/02 19:34:10 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	j = ft_strlen(s1);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	if (s1 != 0)
		ft_strlcpy(str, s1, (j + 1));
	i = 0;
	while (s2[i])
	{
		str[j + i] = s2[i];
		i++;
	}
	str[j + i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strjoin("hola", "como"));
	//printf("%d", strjioin("", "como"));
	return (0);
}*/
