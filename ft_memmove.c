/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:59:15 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 01:10:05 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*x;
	unsigned char		*tmp;	
	unsigned char		*y;
	size_t				i;

	i = -1;
	y = malloc((n + 1) * sizeof(unsigned char));
	if (!y)
		return (NULL);
	tmp = (unsigned char *)src;
	while (++i < n)
		y[i] = tmp[i];
	y[i] = '\0';
	i = -1;
	x = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, n);
	if (dst > src)
		while (++i < n)
			x[i] = y[i];
	free(y);
	return (dst);
}
