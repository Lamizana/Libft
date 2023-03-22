/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:53:18 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/16 13:14:11 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	nb_bloc(char const *str, char c)
{
	size_t	i;
	size_t	bloc;

	i = 0;
	bloc = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			bloc++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (bloc);
}

static size_t	ft_len(char const *s, char c, size_t len)
{
	if (!ft_strchr(s, c))
		len = ft_strlen(s);
	else
		len = ft_strchr(s, c) - s;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		index;
	size_t	len;

	if (!s)
		return (0);
	dest = ft_calloc(sizeof(char *), nb_bloc(s, c) + 1);
	if (!dest)
		return (0);
	index = 0;
	while (*s != '\0')
	{	
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
		{
			len = ft_len(s, c, len);
			dest[index] = ft_substr(s, 0, (len));
			index++;
			s += len;
		}
	}
	return (dest);
}
