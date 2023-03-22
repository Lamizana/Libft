/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:02:19 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 12:56:39 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*find;
	size_t		i;

	find = s;
	i = 0;
	if (c < 0 || c > 127)
		c = c % 256;
	while (i < n)
	{
		if (c == find[i])
			return ((void *)s);
		i++;
		s++;
	}
	return (0);
}
