/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:04:00 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/11 22:24:55 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_cwords(char const *s, char c)
{
	size_t	i;
	size_t	cwords;

	i = 0;
	cwords = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cwords++;
		i++;
	}
	return (cwords);
}

size_t	pos(const char *s, size_t i, size_t len)
{
	if (s[i + len] != '\0')
		i = len + i + 1;
	else
		i = i + len;
	return (i);
}

size_t	len_word(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**freeall(char **nws, size_t i)
{
	while (i > 0)
	{
		i--;
		free(nws[i]);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**nws;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	nws = malloc(sizeof(char *) * (ft_cwords(s, c) + 1));
	if (!nws)
		return (NULL);
	while (s[i])
	{
		len = len_word(s, c, i);
		if (s[i] != c)
		{
			nws[j] = ft_substr(s, i, len);
			if (!nws[j])
				return (freeall(nws, j));
			j++;
		}
		i = pos(s, i, len);
	}
	nws[j] = NULL;
	return (nws);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "Holab mundo, esto es una prueba.";
	char **arr = ft_split(str, ' ');

	if (!arr)
		return (1);

	for (int i = 0; arr[i]; i++)
		printf("Palabra %d: %s\n", i + 1, arr[i]);

	for (int i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);

	return (0);
}*/
