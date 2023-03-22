/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamizan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:51:33 by alamizan          #+#    #+#             */
/*   Updated: 2022/10/19 14:22:57 by alamizan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_reverse(char *str)
{
	char	tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static long int	signe(long int n1)
{
	if (n1 < 0)
		n1 *= -1;
	return (n1);
}

char	*ft_itoa(int n)
{
	char		*nb;
	int			i;
	long int	n1;

	n1 = n;
	i = 0;
	if (n1 == 0)
	{
		nb = ft_strdup("0");
		return (nb);
	}
	nb = malloc(sizeof(char) * (ft_len(n1) + 1));
	if (!nb)
		return (0);
	n1 = signe(n1);
	while (n1 > 0)
	{
		nb[i++] = (n1 % 10) + 48;
		n1 = n1 / 10;
	}
	if (n < 0)
		nb[i++] = '-';
	nb[i] = '\0';
	ft_reverse(nb);
	return (nb);
}
