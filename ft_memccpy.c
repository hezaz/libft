/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:31:06 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 18:30:11 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		ch;
	size_t				i;
	unsigned char		*x;
	const unsigned char	*y;

	ch = (unsigned char)c;
	i = 0;
	x = (unsigned char *)dst;
	y = (const unsigned char *)src;
	while (i < n && x[i] && dst && src && y[i])
	{
		x[i] = y[i];
		if (y[i] == ch)
			return (dst + (++i));
		i++;
	}
	return (NULL);
}
