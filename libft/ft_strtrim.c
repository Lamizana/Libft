/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:09:01 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/15 15:55:57 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	cmp(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		len;
	size_t		i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	len = ft_strlen(s1);
	while (cmp(s1[i], set) == 0)
		i++;
	while (cmp(s1[len - 1], set) == 0)
		len--;
	if (i == ft_strlen(s1))
	{
		str = ft_strdup("");
		return (str);
	}
	str = ft_substr(s1, i, len - i);
	if (!str)
		return (0);
	return ((char *)str);
}
