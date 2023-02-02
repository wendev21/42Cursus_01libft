/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:21:15 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/02/01 18:14:27 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
int main()
{
	char	*ptr;
	int		n = 5;

	printf("%d|%p\n", n, &n);
//	ptr = malloc(0);
	ptr = NULL;
	if(ptr == NULL)
		return(0);
	printf("%p", ptr);
}
