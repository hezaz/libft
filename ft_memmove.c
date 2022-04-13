/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:59:15 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 12:26:21 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*x;
	unsigned char		*tmp;	
	unsigned char		y[n];
	size_t				i;

	i = -1;
	tmp = (unsigned char *)src;
	while (++i < n)
		y[i] = tmp[i];
	i = -1;
	x = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	if (dst > src)
		while (++i < n)
			x[i]= y[i];
	return (dst);
}