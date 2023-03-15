/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:54:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/07 17:14:09 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	first(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	last(const char *s1, const char *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i -1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	f;
	size_t	l;

	f = first(s1, set);
	l = last(s1, set);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (l <= f)
		return (ft_strdup(""));
	str = malloc((l - f + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + f, (l - f) + 1);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    printf("%s", ft_strtrim(s1, " "));
        return (0);
}*/
