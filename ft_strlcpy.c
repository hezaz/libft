/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:52:52 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/04 00:56:44 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			str_len;
	unsigned long	i;

	str_len = ft_strlen(src);
	i = -1;
	if (dstsize == 0)
		return (str_len);
	while (++i < dstsize - 1 && dst && src && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (str_len);
}
