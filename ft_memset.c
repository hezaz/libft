/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:26:25 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/12 21:55:36 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t 			i;
	unsigned char	x;
	unsigned char	*a;

	a = (unsigned char *)b;
	x = (unsigned char)c;
	i = 0;
	while (a && i < len)
		a[i++] = x;
	a[i] = '\0';
	return (b);
}
