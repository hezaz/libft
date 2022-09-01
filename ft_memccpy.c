/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzaz <hzaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:31:06 by hedizaz           #+#    #+#             */
/*   Updated: 2022/09/01 01:58:02 by hzaz             ###   ########.fr       */
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

int	ft_same_str(char *str1, char *str2, size_t n)
{
	int				i;

	i = -1;
	while ((++i < (int)n) && str1 && str2)
		if (str1[i] != str2[i])
			return (0);
	return (1);
}
