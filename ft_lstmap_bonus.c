/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wecorzo- <wecorzo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:41:57 by wecorzo-          #+#    #+#             */
/*   Updated: 2023/07/08 18:27:46 by wecorzo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	new_list = ft_lstnew(content);
	if (!new_list)
		return (ft_lstclear(&new_list, del), NULL);
	new_list->next = ft_lstmap(lst->next, f, del);
	return (new_list);
}
