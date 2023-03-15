/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:43:47 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/06 22:57:13 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*nws;
	size_t			len;
	unsigned int	unsigned_n;

	len = ft_len(n);
	unsigned_n = n;
	nws = ft_calloc((len + 1), sizeof(char));
	if (!nws)
		return (NULL);
	if (n == 0)
		nws[0] = '0';
	if (n < 0)
	{
		unsigned_n = n * -1;
		nws[0] = '-';
	}
	while (unsigned_n > 0)
	{
		nws[--len] = (unsigned_n % 10) + 48;
		unsigned_n = (unsigned_n / 10);
	}
	return (nws);
}
/*
int main ()
{
	printf ("%s", ft_itoa(0));
	return (0);
}*/
