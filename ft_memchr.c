/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:35:55 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 18:30:22 by administrat      ###   ########.fr       */
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
