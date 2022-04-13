/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedizaz <hedizaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:47:17 by hedizaz           #+#    #+#             */
/*   Updated: 2022/04/14 00:07:50 by hedizaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc;
	int		*tmp;
	size_t	i;

	i = 0;
	if (size == 0 || count == 0  || (size * count) > SIZE_MAX)
		return ((void *) NULL);
	if ((size == SIZE_MAX && count > 1) || (count == SIZE_MAX && size > 1))
		return ((void *) NULL);
	calloc = malloc(size * count);
	if (!calloc)
		return ((void *) NULL);
	tmp = (int *)calloc;
	while (i < count)
		tmp[i++] = 0;
	return (calloc);
}

char	**ft_ultimate_malerror(char **s, char *s2)
{
	free(s);
	free(s2);
	s = NULL;
	s2 = NULL;
	return (s);
}

void	ft_free(char **s)
{
	free(*s);
	*s = NULL;
}

void	ft_int_free(int **s)
{
	free(*s);
	*s = NULL;
}

char	**ft_ulti_malerror(char **s)
{
	*s = NULL;
	return (s);
}
