/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:04:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/19 15:36:57 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<ctype.h>
#include<xlocale.h>
#include<stdio.h>
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main()
{
	int p = 'V';

	printf("%c \n", ft_tolower(p));
	printf("%c", tolower(p));
}
*/
