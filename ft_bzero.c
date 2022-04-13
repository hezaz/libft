/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:29:29 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/12 21:56:07 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	long			i;
	long			t;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	t = (long)n;
	if (n == 0)
		return ;
	while (a && i < t)
		a[i++] = 0;
	return ;
}
