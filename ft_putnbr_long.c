/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:44:04 by wecorzo-          #+#    #+#             */
/*   Updated: 2024/01/29 14:44:54 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_putnbr(int num, char signo, int base)
{
        int                             i;
        unsigned int    num_long;

        i = 0;
        if (num < 0)
        {
                if (signo == '-')
                        ft_putchar('-');
                num_long = (num * -1);
        }
        else
                num_long = num;
        if (num_long <= 9)
                ft_putchar((num_long + '0'));
        if (num_long > 9)
        {
                ft_putnbr(num_long / base, signo, base);
                ft_putnbr(num_long % base, signo, base);
        }
        i = ft_len(num, base);
        return (i);
}
