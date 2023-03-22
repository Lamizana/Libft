/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:03:43 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/11 10:37:27 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;
	size_t	j;

	i = 0;
	if ((big == NULL || little == NULL) && len == 0)
		return (NULL);
	if ((*little == '\0'))
		return ((char *)big);
	len_little = ft_strlen(little);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] != little[j])
			i++;
		while (big[i] == little[j] && i < len && j < len_little)
		{
			i++;
			j++;
		}
		if (j == len_little)
			return ((char *)big + i - j);
		i = i - j + 1;
	}
	return (0);
}
