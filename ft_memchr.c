/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:35:55 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/13 12:12:36 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	set;
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	set = (unsigned char)c;
	while (str && i < (int)n)
		if (str[i++] == set)
			return (str + (--i));
	return (NULL);
}