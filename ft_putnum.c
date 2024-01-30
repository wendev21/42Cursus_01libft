/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:19:00 by wecorzo-          #+#    #+#             */
/*   Updated: 2024/01/29 14:19:23 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_putnum(unsigned long num, int base)
{
        int     i;

        i = 0;
        if (num <= 9)
                ft_putchar(num + '0');
        else
        {
                ft_putnum((num / base), base);
                ft_putnum((num % base), base);
        }
        i = ft_len((unsigned long int)num, base);
        return (i);
}
