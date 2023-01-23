/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:40:43 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/19 15:04:20 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<ctype.h>
#include<xlocale.h>
#include<stdio.h>*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main()
{
	int p;
	int a;
	
	a = 'b';
	p = ft_toupper(a);	
	printf("%c \n", p);
	printf("%c", toupper(a));
	return (0);
}*/
