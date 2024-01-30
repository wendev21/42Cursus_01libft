/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:20:10 by wecorzo-          #+#    #+#             */
/*   Updated: 2024/01/29 14:20:31 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_printhex(unsigned long long ptr, char c, int *i)
{
        char    x_def;

        x_def = 'a';
        if (c == 'p')
        {
                write(1, "0x", 2);
                c = 'a';
                *i += 2;
        }
        if (c == 'X')
                x_def = 'A';
        if (ptr < 16)
        {
                if (ptr < 10)
                        *i += ft_putchar(ptr + '0');
                else
                        *i += ft_putchar(ptr - 10 + x_def);
        }
        else
        {
                ft_printhex(ptr / 16, c, i);
                ft_printhex(ptr % 16, c, i);
        }
        return (*i);
}
