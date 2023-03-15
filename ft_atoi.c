/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:28:20 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/01/26 18:02:38 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result + (str[i] - '0');
		if (ft_isdigit(str [i + 1]))
			result = result * 10;
		i++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char *str = "  2525";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}*/
