/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:15:34 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/10 12:09:50 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*destination;
	const char		*source;
	int				i;

	i = 0;
	if (!src && !dest)
		return (0);
	destination = dest;
	source = src;
	while (n)
	{
		destination[i] = source[i];
		i++;
		n--;
	}
	return ((void *)destination);
}
