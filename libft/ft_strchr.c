/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:52:38 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/05 12:32:23 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0 || c > 127)
		c %= 256;
	while ((*s != c) && (*s != '\0'))
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}