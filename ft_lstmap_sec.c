/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:17:35 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/03/14 21:25:05 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (0);
	aux = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (!new_lst->next)
		{
			ft_lstclear(&aux, del);
			return (0);
		}
		lst = lst->next;
		new_lst = new_lst->next;
	}
	new_lst->next = NULL;
	return (aux);
}
