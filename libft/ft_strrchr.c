/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:54:24 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 12:39:04 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c < 0 || c > 127)
		c %= 256;
	while ((*(s + len) != c) && (s + len != s))
		len--;
	if (*(s + len) == c)
		return ((char *)s + len);
	return (0);
}
