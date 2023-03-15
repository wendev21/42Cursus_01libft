/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:36:27 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/06 13:00:26 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
//
//char	*ft_strrchr(const char *s, int c)
//{
//	size_t	i;
//
//	i = ft_strlen(s) + 1;
//	while (i > 0)
//	{
//		i--;
//		if (s[i] == (char)c)
//			return (&((char *)s)[i]);
//	}
//	//if (s[0] == (char)c)
//	//	return (&((char *)s)[0]);
//	return (NULL);
//}

//char	*ft_strrchr(const char *s, int c)
//{
//	size_t	i;
//	char	*reverse_str;
//
//	i = ft_strlen(s);
//	reverse_str = (char *)s + i;
//	while (reverse_str >= s)
//	{
//		if (*reverse_str == (char)c)
//			return (((char *)reverse_str));
//		reverse_str--;
//	}
//	return (NULL);
//}
//char	*ft_strrchr(const char *s, int c)
//{
//	char	*last_match;
//
//	last_match = NULL;
//	while (*s != '\0')
//	{
//		if (*s == (char)c)
//			last_match = (char *)s;
//		s++;
//	}
//	if ((char)c == '\0')
//		last_match = (char *)s;
//	if (last_match == NULL)
//		return NULL;
//	return last_match;
//}
///*
//#include <stdio.h>
//int main()
//{
//	const	char *s = "bonjourno";
//	int	c = 'b';
//	printf("%s\n", strrchr(s + 2, c));
//	printf("%s", ft_strrchr(s + 2 , c));
//	return (0);
//}
//*/
