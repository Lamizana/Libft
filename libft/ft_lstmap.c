/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:58:00 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/18 16:50:19 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;

	if (!lst || !del || !f)
		return (0);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
	{
		ft_lstclear(&tmp, del);
		return (0);
	}
	p = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (p);
}
