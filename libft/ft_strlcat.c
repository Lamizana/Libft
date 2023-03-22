/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:02:39 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 12:24:02 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	if ((dst == NULL || src == NULL) && size == 0)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	ret = len_dst + len_src;
	if (size == 0 || len_dst > size)
	{
		ret = size + len_src;
		return (ret);
	}
	while ((len_dst + i) < (size - 1) && src[i] != '\0')
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (ret);
}
