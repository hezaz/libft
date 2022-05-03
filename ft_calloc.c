/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: administrateur <administrateur@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:47:17 by hedizaz           #+#    #+#             */
/*   Updated: 2022/05/03 17:55:40 by administrat      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*calloc;
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	calloc = NULL;
	tmp = NULL;
	if (size == 0 || count == 0 || (size * count) > SIZE_MAX)
		return ((void *) NULL);
	if ((size == SIZE_MAX && count > 1) || (count == SIZE_MAX && size > 1))
		return ((void *) NULL);
	calloc = malloc(size * count);
	if (!calloc)
		return ((void *) NULL);
	tmp = (unsigned char *)calloc;
	while (i < (count * size))
		tmp[i++] = 0;
	tmp = NULL;
	return (calloc);
}
/*
int main (void)
{
	char e[] = {0, 0, 0, 0};
	void * p = ft_calloc(2, 2);
	if(memcmp(p, e, 2))
		printf("error");
		//return(1);

	free(p);
	//p = e;
	p = NULL;
	
	return (0);
}
*/

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
	s = malloc(sizeof(char *));
	*s = NULL;
	return (s);
}
