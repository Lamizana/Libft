/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:35:35 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/10 11:32:55 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*dst;

	str = (char *)src;
	dst = (char *)dest;
	if (dest > src)
	{
		while (n)
		{
			*(dst + n - 1) = *(str + n - 1);
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
