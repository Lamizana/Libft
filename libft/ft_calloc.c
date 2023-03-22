/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:41:47 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/18 16:43:54 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p_taille;

	if (size == 0 || nmemb == 0)
	{
		p_taille = malloc(0);
		if (!p_taille)
			return (NULL);
		return (p_taille);
	}
	if (((nmemb * size) / size != nmemb))
		return (0);
	p_taille = malloc(nmemb * size);
	if (!p_taille)
		return (0);
	ft_bzero(p_taille, nmemb * size);
	return (p_taille);
}
