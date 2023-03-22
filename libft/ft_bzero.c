/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:56:37 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 11:39:06 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*chaine;
	int				index;

	chaine = s;
	index = 0;
	while (n > 0)
	{
		chaine[index] = 0;
		n--;
		index++;
	}
}
