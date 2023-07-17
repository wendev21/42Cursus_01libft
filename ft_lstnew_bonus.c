/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:05:35 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/13 13:32:04 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnodo;

	newnodo = malloc(sizeof(*newnodo));
	if (!newnodo)
		return (NULL);
	newnodo->content = content;
	newnodo->next = NULL;
	return (newnodo);
}
