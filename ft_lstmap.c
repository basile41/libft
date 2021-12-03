/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bregneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:19:39 by bregneau          #+#    #+#             */
/*   Updated: 2021/12/03 16:19:07 by bregneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	start = NULL;
	if (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			return (NULL);
		start = new;
		while (lst->next)
		{
			new->next = ft_lstnew(f(lst->content));
			new = new->next;
			if (!new)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			lst = lst->next;
		}
	}
	return (start);
}
