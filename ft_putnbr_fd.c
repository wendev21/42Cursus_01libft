/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:00:15 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/02 18:25:18 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	unsigned_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unsigned_n = n * -1;
	}
	else
		unsigned_n = n;
	if (unsigned_n <= 9)
		ft_putchar_fd(unsigned_n + 48, fd);
	if (unsigned_n > 9)
	{
		ft_putnbr_fd(unsigned_n / 10, fd);
		ft_putnbr_fd(unsigned_n % 10, fd);
	}
}
