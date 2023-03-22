/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:30:56 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/12 15:32:05 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp_nxt;

	if (!lst || !del)
		return ;
	tmp = (*lst);
	while (tmp != NULL)
	{
		tmp_nxt = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmp_nxt;
	}
	(*lst) = NULL;
}
