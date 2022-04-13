/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 05:28:00 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/14 00:54:13 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_int(int n)
{
	size_t	len;
	long	nbr;

	len = 0;
	nbr = (long)n;
	if (nbr >= 0 && nbr <= 9)
		return (1);
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len_nb;
	long	nbr;
	size_t	i;

	nbr = (long)n;
	len_nb = len_int(n);
	i = 0;
	s = malloc(sizeof(char) * len_nb + 1);
	if (!s)
		return (NULL);
	s[len_nb--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
		i++;
	}
	while (nbr > 0 && len_nb >= i)
	{
		s[len_nb--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}