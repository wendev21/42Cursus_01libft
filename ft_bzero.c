/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:12:01 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/23 15:19:29 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include<stdio.h>
#include<stdlib.h>
#include<strings.h>*/
#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
int main()
{
	char str[20]= "esto es una funcion";
	char str1[20] = "esto es una funcion";
	bzero(str1 + 2, 3);
	printf("%s\n" , str1);
	ft_bzero(str + 2, 3); 
	printf("%s", str);
	return (0);
}*/
