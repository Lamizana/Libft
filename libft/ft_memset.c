/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:30:16 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 12:07:50 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*chaine;
	int				index;

	chaine = s;
	index = 0;
	while (n > 0)
	{
		chaine[index] = (unsigned char)c;
		n--;
		index++;
	}
	return ((void *)chaine);
}
