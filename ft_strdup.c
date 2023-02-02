/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:50:13 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/01 18:38:35 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	l_s1;

	l_s1 = ft_strlen(s1) + 1;
	ptr = (char *)malloc(l_s1 * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, l_s1);
	return (ptr);
}
