/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:37:43 by wecorzo-          #+#    #+#             */
/*   Updated: 2024/01/30 07:23:40 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (1);
}

static int     ft_putstr(char *str)
{
        int     i;

        if (!str)
        {
                write(1, "(null)", 6);
                i = 6;
        }
        else
        {
                write(1, str, ft_strlen(str));
                i = ft_strlen(str);
        }
        return (i);
}

static int	find_format(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == '%')
		len += ft_putchar('%');
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(args, long int), '-', 10);
	else if (c == 'u')
		len += ft_putnum(va_arg(args, unsigned int), 10);
	else if (c == 'X' || c == 'x')
		ft_printhex(va_arg(args, unsigned int), c, &len);
	else if (c == 'p')
		ft_printhex(va_arg(args, unsigned long), c, &len);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str || *str == '\0')
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", str[i + 1]))
			{
				i++;
				len += find_format(str[i], args);
			}
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
