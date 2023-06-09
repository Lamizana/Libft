/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:06:35 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 15:45:08 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s || len <= 0)
	{
		dest = ft_strdup("");
		return (dest);
	}
	if (len + start > len_s)
		dest = malloc(sizeof(char) * ((len_s - start) + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (len + start > len_s)
		ft_strlcpy(dest, s + start, len_s - (start + len + 1));
	else
		ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}
