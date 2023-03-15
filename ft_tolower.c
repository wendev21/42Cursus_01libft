/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:04:54 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/23 15:23:21 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<ctype.h>
#include<xlocale.h>
#include<stdio.h>
*/

#include "libft.h"

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
