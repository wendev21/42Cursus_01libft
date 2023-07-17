/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:28:51 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/13 17:36:14 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	longitud;

	if (!lst)
		return (0);
	longitud = 1;
	while (lst->next)
	{
		lst = lst->next;
		longitud++;
	}
	return (longitud);
}
