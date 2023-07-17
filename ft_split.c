/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:52:22 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/07/06 16:02:59 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	ft_checkadd(const char *s, size_t i, size_t wordlen)
{
	if (s[i + wordlen] != '\0')
		i = wordlen + i + 1;
	else
		i = wordlen + i;
	return (i);
}

char	**ft_freeall(char **ptr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free (ptr);
	return (NULL);
}

size_t	ft_lenword(const char *s, char c, size_t i)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[wordlen + i] != c && s[wordlen + i] != '\0')
		wordlen++;
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	wordcount;
	size_t	wordlen;

	ptr = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	wordcount = 0;
	while (s[i])
	{
		wordlen = ft_lenword(s, c, i);
		if (s[i] != c)
		{
			ptr[wordcount] = ft_substr(s, i, wordlen);
			if (!ptr[wordcount])
				return (ft_freeall(ptr, wordcount));
			wordcount++;
		}
		i = ft_checkadd(s, i, wordlen);
	}
	ptr[wordcount] = NULL;
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	char *str = "Hola mundo es28o es un!a prueba.   ";
	char **arr = ft_split("hello!", 32:' '); 
	int i;

	i = 0;
	if (!arr)
		return(1);
	while(arr[i] != NULL){
		printf("Palabra %d: %s\n", i +1, arr[i]);
		i++;
	}

	return (0);
}*/
